#include <iostream>
#include "Animal.h"
#include "Amphibian.h"

Amphibian::Amphibian(int l, int h) : Animal(l, h)
{

}

void Amphibian::Voice()
{
    std::cout << "Amphibian sound" << std::endl;
}