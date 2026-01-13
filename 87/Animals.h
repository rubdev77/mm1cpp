#ifndef ANIMALS_H
#define ANIMALS_H

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
