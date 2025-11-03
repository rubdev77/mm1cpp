#ifndef CAR_H
#define CAR_H
#include <iostream>
class Car
{
    private:
    std::string model;
    std::string color;
    int year;
    public:
    Car(std::string mdl, std::string clr, int yr);
    Car();
    ~Car() = default;
};


#endif