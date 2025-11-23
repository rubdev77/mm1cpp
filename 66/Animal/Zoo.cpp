#include <iostream>
#include "Animal.h"
#include "Zoo.h"

Zoo::Zoo(Animal * animal[], int n) : n(n)
{   
    m_arr = new Animal*[n];
    for(int i = 0; i < n; i++)
    {
            m_arr[i] = animal[i];   
    }
}
Zoo::~Zoo()
{
    for(int i = 0; i < n; i++)
    {
        delete m_arr[i];
    }
    delete [] m_arr;
}

Zoo::Zoo(Zoo&& other)
{
    this -> n = other.n;
    this -> m_arr = other.m_arr;    
    other.m_arr = nullptr;
    other.n = 0;
}

Zoo& Zoo::operator=(Zoo && other)
{
    if(this!=&other)
    {
        for(int i = 0; i < n; i++)
        {
            delete [] m_arr[i];
        }
        delete [] m_arr;
        this -> n = other.n;
        this -> m_arr = other.m_arr;    
        other.m_arr = nullptr;
        other.n = 0;
    }
    return *this;
}

void Zoo::MakeVoices() const
{
        for (int i = 0; i < n; i++)
            m_arr[i]->Voice();
}
