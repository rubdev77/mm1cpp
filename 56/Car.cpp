#include "Car.h"
Car::Car()
{
    model = "";
    color = "";
    year = 0;
}
Car::Car(std::string mdl, std::string clr, int yr)
{
    model = mdl;
    color = clr;
    year = yr;
}