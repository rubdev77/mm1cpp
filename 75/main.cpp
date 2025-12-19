#include <iostream>
#include "Parking.h"

Parking* Parking::instance = nullptr;

int main()
{
    Parking* p1 = Parking::getInstance();
    Car a("Red", 2010);
    Car b("Blue", 2011);
    p1 -> parkCar(a);
    p1 -> parkCar(b);
    p1 -> printCar();
}