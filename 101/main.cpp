#include <iostream>
#include <thread>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <mutex>

const long long vsize = 1000000000;
std::vector<int> v(vsize);
long long result = 0;
std::mutex mtx;

void sum(int start, int end)
{
    long long res = 0;
    for(long long i = start; i < end; i++)
    {
        mtx.lock();
        res += v[i];
        mtx.unlock();
    }

    result += res;
}

int main()
{
    std::srand(std::time(0));
    for(long long i = 0; i < vsize; i++)
    {
        v[i] = std::rand() % 101;
    }

    constexpr long long gorc = vsize / 5;
    std::thread t1(sum, 0, gorc);
    std::thread t2(sum, gorc, 2 * gorc);
    std::thread t3(sum, 2 * gorc, 3 * gorc);
    std::thread t4(sum, 3*gorc, 4*gorc);
    std::thread t5(sum, 4*gorc, vsize);

    t1.join();
    t2.join();
    t3.join();
    t4.join();
    t5.join();

    std::cout << result << std::endl;

    return 0;
}