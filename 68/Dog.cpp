#include <iostream>
#include "Dog.h"

Dog::Dog(std::string b, std::string f, int w, int a, bool d, double t, bool c) 
    : Animal(4, 0, w), breed(b), furColor(f), age(a), isDomesticated(d), tailLength(t), hasCollar(c) 
{
}

void Dog::Voice() 
{
    std::cout << "The " << breed << " barks loudly!" << std::endl;
}
