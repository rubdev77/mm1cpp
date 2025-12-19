#include <iostream>
#include "Car.h"
Car::Car(std::string clr, int yr)
{
        color = clr;
        year = yr;
}

Car::Car(const Car & oth)
{
        this -> color = oth.color;
        this -> year = oth.year;
}
Car & Car::operator = (const Car & oth)
{
        if(this==&oth)
        {
            return *this;
        }
        color = oth.color;
        year = oth.year;
        return *this;
}
void Car::PrintOptions() const
{
        std::cout << "Color: " << color << std::endl;
        std::cout << "Year: " << year << std::endl;
}

void Car::ChangeColor(std::string newcl)
{
        color = newcl;
}
