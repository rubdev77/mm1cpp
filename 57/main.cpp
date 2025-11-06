#include <iostream>
#include "Logger.h"


int main()
{
    Matrix obj1(5, 4);
    obj1.Init();
    Logger obj2(obj1, "output.txt");
    obj2.Log();
    return 0;
}
