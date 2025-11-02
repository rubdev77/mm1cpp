#ifndef HEADER56_H
#define HEADER56_H
#include "header56Car.h"
class Matrix
{
    private:
    Car ** mat;
    int n; 
    int m;
    public:
    Matrix(int row, int column);
    Matrix();
    ~Matrix();
    Matrix(const Matrix&);
    Matrix& operator=(const Matrix&);
};


#endif