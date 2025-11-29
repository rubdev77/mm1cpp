#include <iostream>
#include "Kangaroo.h"

Kangaroo::Kangaroo(bool s, double j, double p, int w, std::string d, int a, double t) 
    : Animal(2, 2, w), hasSack(s), jumpHeight(j), pouchSize(p), diet(d), age(a), tailLength(t) 
{
}

void Kangaroo::Voice() 
{
    std::cout << "The kangaroo thumps loudly!" << std::endl;
}
