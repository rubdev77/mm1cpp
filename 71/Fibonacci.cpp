#include <iostream>


template <int N>
class Fibo
{
    public:
    static const long long val = Fibo<N-1>::val + Fibo<N-2>::val;
};
template <>
class Fibo<0>
{
    public:
    static const long long val = 0;
};
template <>
class Fibo<1>
{
    public:
    static const long long val = 1;
};
int main()
{
    std::cout << Fibo<4>::val << std::endl;
    return 0;
}