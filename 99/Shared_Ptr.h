#ifndef SHARED_PTR_H
#define SHARED_PTR_H

#include <cstddef>

template <typename T>
class Shared_Ptr
{
    private:
    T * m_ptr;
    std::size_t * m_ref_count;

    void reset();

    public:
    Shared_Ptr();
    explicit Shared_Ptr(T * ptr);
    ~Shared_Ptr();

    Shared_Ptr(const Shared_Ptr & other);
    Shared_Ptr& operator=(const Shared_Ptr & other);

    Shared_Ptr(Shared_Ptr && other) noexcept;
    Shared_Ptr& operator=(Shared_Ptr && other) noexcept;

    T& operator *();
    const T& operator*() const;

    T* operator->();
    const T* operator->() const;

    std::size_t getCount() const;
    T* get() const;
};


template <typename T>
void Shared_Ptr<T>::reset()
{
    if(m_ref_count != nullptr)
    {
        --(*m_ref_count);
        if(*m_ref_count == 0)
        {
            delete m_ptr;
            delete m_ref_count;
        }
    }
    m_ptr = nullptr;
    m_ref_count = nullptr;
}

template <typename T>
Shared_Ptr<T>::Shared_Ptr() : m_ptr(nullptr), m_ref_count(nullptr)
{
}

template <typename T>
Shared_Ptr<T>::Shared_Ptr(T * ptr) : m_ptr(ptr)
{
    m_ref_count = (ptr != nullptr) ? new std::size_t(1) : nullptr;
}

template <typename T>
Shared_Ptr<T>::~Shared_Ptr()
{
    reset();
}

template <typename T>
Shared_Ptr<T>::Shared_Ptr(const Shared_Ptr & other)
{
    m_ptr = other.m_ptr;
    m_ref_count = other.m_ref_count;

    if(m_ref_count != nullptr)
        ++(*m_ref_count);
}

template <typename T>
Shared_Ptr<T>& Shared_Ptr<T>::operator=(const Shared_Ptr & other)
{
    if(this != &other)
    {
        reset();
        m_ptr = other.m_ptr;
        m_ref_count = other.m_ref_count;
        if(m_ref_count != nullptr)
            ++(*m_ref_count);
    }
    return *this;
}

template <typename T>
Shared_Ptr<T>::Shared_Ptr(Shared_Ptr && other) noexcept
{
    m_ptr = other.m_ptr;
    m_ref_count = other.m_ref_count;
    other.m_ptr = nullptr;
    other.m_ref_count = nullptr;
}

template <typename T>
Shared_Ptr<T>& Shared_Ptr<T>::operator=(Shared_Ptr && other) noexcept
{
    if(this != &other)
    {
        reset();
        m_ptr = other.m_ptr;
        m_ref_count = other.m_ref_count;
        other.m_ptr = nullptr;
        other.m_ref_count = nullptr;
    }
    return *this;
}

template <typename T>
T& Shared_Ptr<T>::operator *()
{
    return *m_ptr;
}

template <typename T>
const T& Shared_Ptr<T>::operator*() const
{
    return *m_ptr;
}

template <typename T>
T* Shared_Ptr<T>::operator->()
{
    return m_ptr;
}

template <typename T>
const T* Shared_Ptr<T>::operator->() const
{
    return m_ptr;
}

template <typename T>
std::size_t Shared_Ptr<T>::getCount() const
{
    return (m_ref_count != nullptr) ? *m_ref_count : 0;
}

template <typename T>
T* Shared_Ptr<T>::get() const
{
    return m_ptr;
}

#endif