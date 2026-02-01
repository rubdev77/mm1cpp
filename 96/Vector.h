#ifndef VECTOR_H
#define VECTOR_H

template <typename T>
class Vector
{
protected:
    int n;
    int cap;
    T * m_data;
public:
    Vector(int row);
    Vector();
    Vector(std::initializer_list<T> l);
    ~Vector();
    Vector(const Vector<T>&);
    Vector& operator=(const Vector<T>&);
    Vector(Vector<T>&& other);
    Vector& operator=(Vector<T>&& other);
public:
    T& operator[](int i);
    int Sizev();
    int Capacity();
    virtual void Init();
    virtual void Print();
    void reserve(int sp);
    void resize(int new_size);
    void PB(T a);
    T at(int pos);
};

template <typename T>
Vector<T>::Vector()
{
    m_data = nullptr;
    n = 0;
    cap = 0;
}

template <typename T>
Vector<T>::Vector(std::initializer_list<T> l) : n(l.size()), cap(n), m_data(new T[cap])
{
    std::size_t i = 0;
    for(auto it = l.begin(); it != l.end(); it++)
    {
        m_data[i++] = *it;
    }
}

template <typename T>
Vector<T>::Vector(int row)
{
    n = row;
    cap = row;
    m_data = new T[cap];
}

template <typename T>
Vector<T>::~Vector()
{
    delete [] m_data;
}

template <typename T>
Vector<T>::Vector(const Vector<T>& other)
{
    n = other.n;
    cap = other.cap;
    m_data = new T[cap];
    for(int i = 0; i < n; i++)
    {
        m_data[i] = other.m_data[i];
    }
}

template <typename T>
Vector<T>& Vector<T>::operator=(const Vector<T>& other)
{
    if(this == &other)
    {
        return *this;
    }
    delete [] m_data;
    n = other.n;
    cap = other.cap;
    m_data = new T[cap];
    for(int i = 0; i < n; i++)
    {
        m_data[i] = other.m_data[i];
    }
    return *this;
}

template <typename T>
Vector<T>::Vector(Vector<T>&& other) : m_data(other.m_data), n(other.n), cap(other.cap)
{
    other.m_data = nullptr;
    other.n = 0;
    other.cap = 0;
}

template <typename T>
Vector<T>& Vector<T>::operator=(Vector<T>&& other)
{
    if(this == &other)
    {
        return *this;
    }
    delete [] m_data;
    m_data = other.m_data;
    n = other.n;
    cap = other.cap;
    other.m_data = nullptr;
    other.n = 0;
    other.cap = 0;
    return *this;
}

template <typename T>
T& Vector<T>::operator[](int i)
{
    return m_data[i];
}

template <typename T>
int Vector<T>::Sizev()
{
    return n;
}

template <typename T>
int Vector<T>::Capacity()
{
    return cap;
}

template <typename T>
void Vector<T>::Print()
{
    std::cout << "<<<   Print Vector   >>>\n" << std::endl;
    for(int i = 0; i < n; i++)
    {
        std::cout << m_data[i] << " ";
    }
}

template <typename T>
void Vector<T>::Init()
{
    std::cout << "<<< Init Vector >>>" << std::endl;
    for(int i = 0; i < n; i++)
    {
        m_data[i] = i+7;
    }
}

template <typename T>
void Vector<T>::PB(T a)
{
    if(n == cap)
    {
        int newCap = (cap == 0 ? 1 : cap * 2);
        T* tmp_m_data = new T[newCap];
        for(int i = 0; i < n; i++)
        {
            tmp_m_data[i] = m_data[i];
        }
        delete [] m_data;
        m_data = tmp_m_data;
        cap = newCap;
    }
    m_data[n] = a;
    this->n = this->n + 1;
}

template <typename T>
void Vector<T>::reserve(int sp)
{
    if(sp <= this -> cap) 
    {
        return;
    }
    this -> cap = sp;
    T * tmp_m_data = new T[this->cap];
    for(int i = 0; i < n; i++)
    {
        tmp_m_data[i] = m_data[i];
    }

    delete [] this->m_data;

    m_data = tmp_m_data;
}

template <typename T>
void Vector<T>::resize(int new_size)
{
    if(new_size > this-> cap)
    {
        this -> reserve(new_size);
    }


    this -> n = new_size;
}


template <typename T>
T Vector<T>::at(int pos)
{
    if(pos >= this -> n || pos < 1)
    {
        throw std::out_of_range("Out of Vector Size");
    }

    return this -> m_data[pos];
}

#endif
