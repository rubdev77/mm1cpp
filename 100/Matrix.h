#ifndef MATRIX_H
#define MATRIX_H

template <typename T>
class Matrix
{
    private:
    std::unique_ptr<T[]> m_data;
    std::size_t r;
    std::size_t c;

    public:
    Matrix();
    Matrix(std::size_t rows, std::size_t columns);

    std::size_t getR() const;
    std::size_t getC() const;

    T* operator[](std::size_t i);
    const T* operator[](std::size_t i) const;
};

template <typename T>
Matrix<T>::Matrix() : r(0), c(0), m_data(nullptr)
{

}

template <typename T>
Matrix<T>::Matrix(std::size_t rows, std::size_t columns) : r(rows), c(columns), m_data(std::make_unique<T[]>(rows * columns))
{

}

template <typename T>
std::size_t Matrix<T>::getR() const
{
    return r;
}

template <typename T>
std::size_t Matrix<T>::getC() const
{
    return c;
}

template <typename T>
T* Matrix<T>::operator[](std::size_t i)
{
    return m_data.get() + (i * c);
}

template <typename T>
const T* Matrix<T>::operator[](std::size_t i) const
{
    return m_data.get() + (i * c);
}

#endif