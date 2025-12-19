#include <iostream>

#include "Parking.h"


Parking* Parking::getInstance()
{
    if(instance==nullptr)
    instance = new Parking();
    return instance;
}

void Parking::parkCar(const Car& C)
{
    Cars.push_back(C);
}

int Parking::size() const
{
    return Cars.size();
}
void Parking::printCar() const
{
    for(int i = 0; i < (int)Cars.size(); i++)
    {
        Cars[i].PrintOptions();
    }
}