#ifndef CAT_H
#define CAT_H

#include <string>
#include "Animal.h"

class Cat : public Animal {
private:
    std::string eyeColor;
    std::string furColor;
    int age;
    bool isIndoor;
    double tailLength;
    bool isNeutered;
public:
    Cat(std::string e, std::string f, int w, int a, bool i, double t, bool n);
    void Voice() override;
};

#endif
