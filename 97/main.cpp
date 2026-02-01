#include <iostream>
#include <stdexcept>
#include "Vector.h"

int main()
{
    Vector<int> a { 1, 2, 3, 4, 5 };

    try
    {
        a.at(8);
    }   
    catch(const MyException & e)
    {
        std::cerr << e.what() << std::endl;
    } 
    return 0;
}
