#ifndef KANGAROO_H
#define KANGAROO_H

#include <string>
#include "Animal.h"

class Kangaroo : public Animal {
private:
    bool hasSack;
    double jumpHeight;
    double pouchSize;
    std::string diet;
    int age;
    double tailLength;
public:
    Kangaroo(bool s, double j, double p, int w, std::string d, int a, double t);
    void Voice() override;
};

#endif
