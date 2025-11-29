#ifndef PENGUIN_H
#define PENGUIN_H

#include <string>
#include "Animal.h"

class Penguin : public Animal {
private:
    int age;
    double swimSpeed;
    bool canFly;
    double height;
    std::string speciesType;
public:
    Penguin(int a, int w, double s, bool cf, double h, std::string st);
    void Voice() override;
};

#endif
