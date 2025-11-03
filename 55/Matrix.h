#ifndef MATRIX_H
#define MATRIX_H

class Matrix
{
    private:
    int ** mat;
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