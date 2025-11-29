#include <iostream>
#include "Lion.h"

Lion::Lion(std::string g, int w, double m, int a, bool alpha, bool carn) 
    : Animal(4, 0, w), gender(g), maneSize(m), age(a), isAlpha(alpha), isCarnivore(carn) 
{
}

void Lion::Voice() 
{
    std::cout << "The lion roars fiercely!" << std::endl;
}
