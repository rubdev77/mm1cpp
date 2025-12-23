#include <iostream>
#include "Vector.h"


int main()
{
    std::initializer_list<int> l = {3, 4, 5};
    Vector<int> a(l);
    a.Print();
    return 0;
}
