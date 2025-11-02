#include "header56.h"
#include "header56Car.h"
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
        mat = new Car*[n];
        for(int i = 0; i < n; i++)
        {
            mat[i] = new Car[m];
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
    mat = new Car*[n];
        for(int i = 0; i < n; i++)
        {
            mat[i] = new Car[m];
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
        mat = new Car*[n];
        for(int i = 0; i < n; i++)
        {
            mat[i] = new Car[m];
            for(int j = 0; j < m; j++)
            {
                mat[i][j] = oth.mat[i][j];
            }
        }
    return *this;
}
int main()
{
    return 0;
}