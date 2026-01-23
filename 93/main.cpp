#include <iostream>
#include "Vector.h"


int main()
{
    Vector<int> a { 1, 2, 3, 5, -1, -10 };

    a.resize(17);

    std::cout << a.Sizev() << std::endl;
    return 0;
}
