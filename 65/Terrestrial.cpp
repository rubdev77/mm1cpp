#include <iostream>
#include "Animal.h"
#include "Aquatic.h"
#include "Amphibian.h"
#include "Terrestrial.h"

Terrestrial::Terrestrial(int l, int h) : Animal(l, h), Aquatic(l, h), Amphibian(l, h)
{

}

void Terrestrial::Voice()
{
    std::cout << "Terrestrial sound" << std::endl;
}