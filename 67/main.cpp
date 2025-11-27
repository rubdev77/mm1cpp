#include <iostream>



class A
{
    static int count;
    public:
    A()
    {
        count++;
    }
    A(const A& other)
    {
        count++;
    }
    A(A&& other)
    {
        count++;
    }
    ~A()
    {
        count--;
    }
    static int getC()
    {
        return count;
    }
};

int A::count = 0;
int main()
{
    A obj;
    A obj1 = obj;
    A obj2 = std::move(obj);    
    std::cout << A::getC() << std::endl;
    return 0;
}