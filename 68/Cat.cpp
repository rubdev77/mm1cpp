#include <iostream>
#include "Cat.h"

Cat::Cat(std::string e, std::string f, int w, int a, bool i, double t, bool n) 
    : Animal(4, 0, w), eyeColor(e), furColor(f), age(a), isIndoor(i), tailLength(t), isNeutered(n) 
{
}

void Cat::Voice() 
{
    std::cout << "The cat purrs softly." << std::endl;
}
