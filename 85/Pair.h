#ifndef PAIR_H
#define PAIR_H
template <typename T1, typename T2>
struct Pair
{
    T1 first;
    T2 second;
    Pair(const T1 & a, const T2 & b) : first(a), second(b)
    {

    }

    
    Pair() : first(T1()), second(T2()) {}
    
};

template <typename T1, typename T2>
Pair<T1, T2> make_pair(const T1 & a, const T2 & b)
{
        return Pair<T1, T2>(a, b);
}

#endif