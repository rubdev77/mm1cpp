#ifndef UNIQUEPTR_H
#define UNIQUEPTR_H

template <typename T>
class Unique_Ptr
{
    private:
    T * m_ptr;
    public:
    Unique_Ptr() : m_ptr(nullptr) {}
    explicit Unique_Ptr(T * ptr) : m_ptr(ptr) {}
    Unique_Ptr(const Unique_Ptr &) = delete;
    Unique_Ptr& operator=(const Unique_Ptr &) = delete;
    Unique_Ptr(Unique_Ptr && other);
    Unique_Ptr& operator=(Unique_Ptr && other);
    ~Unique_Ptr();
    public:
    T& operator *();
    const T operator*() const;
    T* operator->();
    const T* operator->() const;
};

template <typename T>
Unique_Ptr<T>::Unique_Ptr(Unique_Ptr<T> && other)
{
    this -> m_ptr = other.m_ptr;
    other.m_ptr = nullptr;
}

template <typename T>
Unique_Ptr<T>& Unique_Ptr<T>::operator=(Unique_Ptr<T> && other)
{
    if(this != &other)
    {
        delete this -> m_ptr;
        this -> m_ptr = other.m_ptr;
        other.m_ptr = nullptr;
    }
    return *this;
}

template <typename T>
Unique_Ptr<T>::~Unique_Ptr()
{
    delete this -> m_ptr;
}

template <typename T>
T& Unique_Ptr<T>::operator*()
{
    return *m_ptr;
}

template <typename T>
const T Unique_Ptr<T>::operator*() const
{
    return *m_ptr;
}

template <typename T>
const T* Unique_Ptr<T>::operator->() const
{
    return m_ptr;
}

template <typename T>
T* Unique_Ptr<T>::operator->()
{
    return m_ptr;
}

#endif