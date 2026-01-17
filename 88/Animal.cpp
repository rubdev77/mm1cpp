#include <iostream>
#include "Animal.h"

Animal::Animal(int legs, int hands, int w) : legs(legs), hands(hands), w(w)
{

}
int Animal::getW() const
{
    return w;
}
void Animal::Walk()
{
    std::cout << "Walking..." << std::endl;
}
void Animal::Eat()
{
    std::cout << "Eating..." << std::endl;
}
void Animal::Jump()
{
    std::cout << "Jumping..." << std::endl;
}

bool Animal::operator >(const Animal& other)
{
    if((this -> w) > other.w)
    return true;
    
    return false;
}

bool Animal::operator <(const Animal& other)
{
    if((this -> w) < other.w)
    return true;
    
    return false;
}

bool Animal::operator ==(const Animal& other)
{
    if((this -> w) == other.w)
    return true;
    
    return false;
}

