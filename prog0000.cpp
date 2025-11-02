#include <iostream>

class A
{
        private:
        int i;
        public:
        A(int i)
        {
                this -> i = i;
        }
        A& operator++()
        {
                ++i;
                return *this;
        }
        A operator++(int)
        {
                A t = *this;
                ++i;
                return t; 
        }
        A& operator--()
        {
                --i;
                return *this;
        }
        A operator--(int)
        {
                A tmp = *this;
                --i;
                return tmp;
        }
        void Print()
        {
                std::cout << "i = " << i << std::endl;
        }
};


int main()
{
       A obj1(5);
       obj1.Print();
       A obj2 = obj1--;
       obj2.Print();
}