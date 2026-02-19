#include <iostream>
#include <vector>
#include <thread>
#include <future>
#include <atomic>
#include <mutex>
#include <chrono>
#include <ctime>

std::vector<std::atomic<long long>> vals(1000);


long long f(int n)
{
    if(n <= 0)
    return 0;
    if(n == 1)
    return 1;
    if(n == 2)
    return 2;
    
    long long num = vals[n].load();

    if(num != -1)
    {
        return num;
    }

    long long ans = f(n - 1) + f(n - 2);

    vals[n].store(ans);

    return ans;
}

int main()
{

    for(int i = 0; i < 1000; ++i) 
    {
        vals[i].store(-1);
    }
    vals[0].store(0);
    vals[1].store(1);
    vals[2].store(2);

    auto start = std::chrono::high_resolution_clock::now();
    
    std::thread t1(f, 10);
    std::thread t2(f, 20);
    std::thread t3(f, 50);

    t1.join();
    t2.join();
    t3.join();

    std::cout << vals[50].load() << std::endl;

    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double, std::milli> elapsed = end - start;

    std::cout << "Task took: " << elapsed.count() << " ms" << std::endl;

    return 0;
}