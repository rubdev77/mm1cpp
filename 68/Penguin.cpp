#include <iostream>
#include "Penguin.h"

Penguin::Penguin(int a, int w, double s, bool cf, double h, std::string st) 
    : Animal(2, 0, w), age(a), swimSpeed(s), canFly(cf), height(h), speciesType(st) 
{
}

void Penguin::Voice() 
{
    std::cout << "The penguin squawks!" << std::endl;
}
