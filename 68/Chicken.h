#ifndef CHICKEN_H
#define CHICKEN_H

#include <string>
#include "Animal.h"

class Chicken : public Animal {
private:
    int eggsPerWeek;
    std::string featherColor;
    bool canFly;
    int age;
    double wingSpan;
    bool isBroody;
public:
    Chicken(int e, std::string f, int w, bool cf, int a, double wing, bool b);
    void Voice() override;
};

#endif
