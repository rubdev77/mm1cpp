#include <iostream>
#include "Car.h"
Car::Car(std::string clr, int yr, Engine eng)
{
        color = clr;
        year = yr;
        engine = eng;
}

Car::Car(Car & oth)
{
        this -> color = oth.color;
        this -> year = oth.year;
        this -> engine = oth.engine;
}
Car & Car::operator = (Car & oth)
{
        if(this==&oth)
        {
            return *this;
        }
        color = oth.color;
        year = oth.year;
        engine = oth.engine;
        return *this;
}
void Car::PrintOptions()
{
        std::cout << "Color: " << color << std::endl;
        std::cout << "Year: " << year << std::endl;
        engine.PrintEngineProp();
}

void Car::ChangeColor(std::string newcl)
{
        color = newcl;
}
