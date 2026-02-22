#include <iostream>
#include <mutex>
#include <thread>
#include <atomic>
#include <condition_variable>
#include <queue>

struct Storage
{
    std::queue<int> q;
    int size = 10;
    bool isEmpty() const
    {
        return q.size() == 0;
    }
    bool isFull() const
    {
        return q.size() == size;
    }
    void push(int g)
    {
        if(!isFull())
        {
            q.push(g);
            std::cout << "size after push = " << q.size() << std::endl; 
        }
    }
    void pop()
    {
        if(!isEmpty())
        {
            q.pop();
            std::cout << "size after pop = " << q.size() << std::endl; 
        }
    }
};


Storage s;
std::condition_variable cv;
std::mutex mtx;

void producer()
{
    while(true)
    {
    std::unique_lock<std::mutex> lc(mtx);
    cv.wait(lc, []()
    {
        return !s.isFull();
    });
    s.push(1);
    lc.unlock();
    cv.notify_one();
    }   
}

void consumer()
{
    while(true)
    {
    std::unique_lock<std::mutex> lc(mtx);
    cv.wait(lc, []()
    {
        return !s.isEmpty();
    });
    s.pop();
    lc.unlock();
    cv.notify_one();
    }
}

int main()
{
    std::thread t1(producer);
    std::thread t2(consumer);

    t1.join();
    t2.join();
    return 0;
}