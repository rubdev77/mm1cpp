#include <iostream>
#include "Reader.h"


int main()
{
    Reader obj("input.txt");
    Matrix mat = obj.getResult();
    mat.Print();
    return 0;
}
