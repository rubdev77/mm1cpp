#ifndef STACK_H
#define STACK_H
#include "Vector.h"
template <typename T>


class Stack : private Vector<T>
{   
    public:
    Stack() : Vector<T>()
    {

    }

    public:
    bool empty() const;
    int size() const;
    void push(const T& d);
    void pop();
    T& top();
    void Print() override;

};

template <typename T>
bool Stack<T>::empty() const
{
    return this->n==0;
}

template <typename T>
int Stack<T>::size() const
{
    return this->n;
}

template <typename T>
void Stack<T>::push(const T& data)
{
    this->PB(data);
}

template <typename T>
void Stack<T>::pop()
{
    if(!(empty()))
    {
        this->pop_back();
    }
}

template <typename T>
T& Stack<T>::top()
{
    if(!(empty()))
    return this->m_data[this->n - 1];  
    else
    {
        static T garbage = T();
        return garbage;
    }
}

template <typename T>
void Stack<T>::Print()
{
    std::cout << "<<<   Print Stack   >>>\n" << std::endl;
    for(int i = this->n - 1; i >= 0; --i)
    {
        std::cout << this->m_data[i] << " ";
    }
    std::cout << std::endl;
}


#endif