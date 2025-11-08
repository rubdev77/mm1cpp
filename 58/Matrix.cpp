#include <iostream> 
#include "Matrix.h"
Matrix::Matrix()
{
    mat = nullptr;
    n = 0;
    m = 0;
}
Matrix::Matrix(int row, int column)
{
        n = row;
        m = column;
        mat = new int*[n];
        for(int i = 0; i < n; i++)
        {
            mat[i] = new int[m];
        }
}
Matrix::~Matrix()
{
        
        for(int i = 0; i < n; i++)
        {
            delete [] mat[i];
        }
        delete [] mat;
}
Matrix::Matrix(const Matrix& oth)
{
    this -> n = oth.n;
    this -> m = oth.m;
    mat = new int*[n];
        for(int i = 0; i < n; i++)
        {
            mat[i] = new int[m];
            for(int j = 0; j < m; j++)
            {
                mat[i][j] = oth.mat[i][j];
            }
        }
}
Matrix& Matrix::operator=(const Matrix& oth)
{
     if(this==&oth)
    {
            return *this;
    }
        n = oth.n;
        m = oth.m;
        mat = new int*[n];
        for(int i = 0; i < n; i++)
        {
            mat[i] = new int[m];
            for(int j = 0; j < m; j++)
            {
                mat[i][j] = oth.mat[i][j];
            }
        }
    return *this;
}
void Matrix::Print()
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
                std::cout << mat[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
int* Matrix::operator [](int i)
{
    return mat[i];
}
int Matrix::retn()
{
    return this->n;
}
int Matrix::retm()
{
    return this->m;
}
void Matrix::Init()
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            mat[i][j] = i+j;
        }
    }
}