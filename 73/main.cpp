#include <iostream>
#include "Vector.h"


int main()
{
    Vector<int> arr(4);
    arr.Init();
    arr.Print();
    arr.PB(4);
    arr.Print();
    return 0;
}
