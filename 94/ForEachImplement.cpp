#include <iostream>
#include <vector>


template <typename ForwardIt, typename Func>

constexpr Func foreach(ForwardIt first, ForwardIt last, Func f) 
{
    for( ; first != last; first++)
    {
        f(*first);
    }

    return f;
}

int main()
{

    std::vector<int> a {1, 2, 3, 4};
    auto func = [](const int & n){std::cout << n << ' ';};

    foreach(a.cbegin(), a.cend(), func);

    return 0;
}