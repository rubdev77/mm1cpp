#ifndef QUEUE_H
#define QUEUE_H
#include "Vector.h"
template <typename T>


class Queue : private Vector<T>
{   
    private:
    int f_ind = 0;
    public:
    Queue() : Vector<T>()
    {

    }

    public:
    bool empty() const;
    int size() const;
    void push(const T& d);
    void pop();
    T& front();
    T& back();
    void Print() override;

};

template <typename T>
bool Queue<T>::empty() const
{
    return f_ind >= this -> n;
}

template <typename T>
int Queue<T>::size() const
{
    return this->n - f_ind;
}

template <typename T>
void Queue<T>::push(const T& data)
{
    this->PB(data);
}

template <typename T>
void Queue<T>::pop()
{
    if(!(empty()))
    f_ind++;
}

template <typename T>
T& Queue<T>::front()
{
    return this->m_data[f_ind];
}

template <typename T>
T& Queue<T>::back()
{
    return this->m_data[this->n - 1];  
}

template <typename T>
void Queue<T>::Print()
{
    std::cout << "<<<   Print Queue   >>>\n" << std::endl;
    for(int i = f_ind; i < this->n; i++)
    {
        std::cout << this->m_data[i] << " ";
    }
    std::cout << std::endl;
}


#endif