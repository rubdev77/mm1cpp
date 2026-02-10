#ifndef MATRIX_H
#define MATRIX_H


template <typename T>
class Matrix
{
    private:
    std::unique_ptr<T[]> m_data;
    std::size_t r;
    std::size_t c;
    std::size_t getR() const
    {
        return r;
    }

    std::size_t getC() const
    {
        return c;
    }
    public:

    Matrix() : r(0), c(0), m_data(nullptr)
    {

    }

    Matrix(std::size_t rows, std::size_t columns) : r(rows), c(columns), m_data(std::make_unique<T[]>(rows * columns))
    {

    } 

    T* operator[](int i)
    {
        return m_data.get() + (i*c);
    }

    const T* operator[](int i) const
    {
        return m_data.get() + (i*c);
    }
};

#endif