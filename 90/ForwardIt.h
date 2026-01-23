#ifndef FORWARDIT_H
#define FORWARDIT_H

template <typename T>
class ForwardIt
{
    private:
    T* ptr;
    public:
    ForwardIt() : ptr(nullptr) {}
    ForwardIt(T* ptr) : ptr(ptr)
    {

    }
    ForwardIt(const ForwardIt & other);
    ForwardIt& operator=(const ForwardIt & other);
    T& operator*();
    T* operator->();
    ForwardIt& operator++();
    ForwardIt operator++(int);
    bool operator==(const ForwardIt& other);
    bool operator!=(const ForwardIt& other);
};

template <typename T>
ForwardIt<T>::ForwardIt(const ForwardIt<T> & other)
{
    this -> ptr = other.ptr;
}

template <typename T>
ForwardIt<T>& ForwardIt<T>::operator=(const ForwardIt<T> & other)
{
    if (this != &other) 
    {
            ptr = other.ptr;
    }
    return *this;
}

template <typename T>
T& ForwardIt<T>::operator*()
{
    return *ptr;
}

template <typename T>
T* ForwardIt<T>::operator->()
{
    return ptr;
}

template <typename T>
ForwardIt<T>& ForwardIt<T>::operator++()
{
    ptr++;
    return *this;
}

template <typename T>
ForwardIt<T> ForwardIt<T>::operator++(int)
{
    ForwardIt<T> temp = *this;

    ptr++;

    return temp;
}

template <typename T>
bool ForwardIt<T>::operator==(const ForwardIt<T>& other)
{
    return this->ptr == other.ptr;
}

template <typename T>
bool ForwardIt<T>::operator!=(const ForwardIt<T>& other)
{
    return this->ptr != other.ptr;
}

#endif