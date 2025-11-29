#ifndef DOG_H
#define DOG_H

#include <string>
#include "Animal.h"

class Dog : public Animal {
private:
    std::string breed;
    std::string furColor;
    int age;
    bool isDomesticated;
    double tailLength;
    bool hasCollar;
public:
    Dog(std::string b, std::string f, int w, int a, bool d, double t, bool c);
    void Voice() override;
};

#endif
