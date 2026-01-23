#include <iostream>
#include "Vector.h"


int main()
{
    Vector<int> a{1,2,3,4};

    a.reserve(20);

    std::cout << a.Capacity() << std::endl;
    return 0;
}
