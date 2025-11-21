#include <iostream>
#include "Animal.h"
#include "Aquatic.h"

Aquatic::Aquatic(int l, int h) : Animal(l, h)
{

}

void Aquatic::Voice()
{
    std::cout << "Aquatic sound" << std::endl;
}