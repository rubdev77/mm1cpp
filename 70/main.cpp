#include <iostream>
#include "Matrix.h"


int main()
{
    Matrix<int> mat(4, 4);
    mat.Init();
    mat.Print();
    return 0;
}
