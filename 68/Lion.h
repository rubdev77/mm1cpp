#ifndef LION_H
#define LION_H

#include <string>
#include "Animal.h"

class Lion : public Animal {
private:
    std::string gender;
    double maneSize;
    int age;
    bool isAlpha;
    bool isCarnivore;
public:
    Lion(std::string g, int w, double m, int a, bool alpha, bool carn);
    void Voice() override;
};

#endif
