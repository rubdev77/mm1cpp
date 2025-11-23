#ifndef MATRIX_H
#define MATRIX_H
class Matrix
{
    protected:
    int ** mat;
    int n; 
    int m;
    public:
    Matrix(int row, int column);
    Matrix();
    ~Matrix();
    Matrix(const Matrix&);
    Matrix& operator=(const Matrix&);
    public:
    int* operator[](int i);
    int retn();
    int retm();
    virtual void Init();
    virtual void Print();
};


#endif