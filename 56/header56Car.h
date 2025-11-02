#ifndef HEADER56Car_H
#define HEADER56Car_H
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