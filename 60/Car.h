#ifndef CAR_H
#define CAR_H
#include "Engine.h"
class Car
{
    private:
    std::string color;
    int year;
    Engine engine;

    public:
    Car(std::string clr, int yr, Engine eng);

    Car(Car & oth);
    Car & operator = (Car & oth);
    void PrintOptions();

    void ChangeColor(std::string newcl);
};
#endif