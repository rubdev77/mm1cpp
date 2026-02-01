#include <iostream>
#include <stdexcept>
#include "Vector.h"


int main()
{
    Vector<int> a { 1, 2, 3, 5, -1, -10 };



    try
    {
        a.at(17);
    }
    catch(const std::out_of_range & e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}
