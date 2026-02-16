#include <iostream>
#include <vector>
#include <future>
#include <thread>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <chrono>


constexpr const long long vsize = 100000000;

std::vector<int> v(vsize);

void init_vec(std::vector<int>& vec)
{
    for (auto i = 0; i < vec.size(); ++i)
    {
        vec[i] = abs(rand() % 100);
    }
}



int main()
{
    std::srand(std::time(0));

    long long result = 0;

    init_vec(v);

    const long long thread_q = std::thread::hardware_concurrency();

    const long long chunk = vsize / thread_q;

    auto start = std::chrono::high_resolution_clock::now();

    std::vector<std::future<long long>> pool(thread_q);

    for (int i = 0; i < pool.size(); ++i)
    {
        auto s = i * chunk;
        auto e = s + chunk;
        pool[i] = std::async(std::launch::async, [](auto start, auto end)
            {
                long long result = 0;
                for (auto i = start; i < end; ++i)
                {
                    result += v[i];
                }
                return result;
            }, s, e);
    }

    for (int i = 0; i < pool.size(); i++)
    {
        result += pool[i].get();
    }

    std::cout << result << std::endl;

    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double, std::milli> elapsed = end - start;

    std::cout << "Task took: " << elapsed.count() << " ms" << std::endl;

    std::cout << "\n";
    std::cout << "\n";
    return 0;
}