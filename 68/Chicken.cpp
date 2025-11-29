#include <iostream>
#include "Chicken.h"

Chicken::Chicken(int e, std::string f, int w, bool cf, int a, double wing, bool b) 
    : Animal(2, 0, w), eggsPerWeek(e), featherColor(f), canFly(cf), age(a), wingSpan(wing), isBroody(b) 
{
}

void Chicken::Voice() 
{
    std::cout << "The chicken clucks!" << std::endl;
}
