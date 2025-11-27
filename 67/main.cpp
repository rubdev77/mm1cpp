#include <iostream>

static int count = 0;

class A
{
    int a;
    int b;
    public:
    A(int a, int b) : a(a), b(b)
    {
        count++;
    }
};


int main()
{
    A obj(4, 5);
    A obj1(6, 7);
    A obj2(10, 8);
    A obj3(9, 7);
    std::cout << count << std::endl;
    return 0;
}