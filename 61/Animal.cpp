#include <iostream>
#include "Animal.h"

Animal::Animal(int legs, int hands) : legs(legs), hands(hands)
{

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
void Animal::Voice()
{
    std::cout << "Animal voices..." << std::endl;
}