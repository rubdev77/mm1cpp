#include <iostream>
#include "Animals.h"

Dog::Dog(std::string b, std::string f, int w, int a, bool d, double t, bool c)
    : Animal(4, 0, w), breed(b), furColor(f), age(a), isDomesticated(d), tailLength(t), hasCollar(c)
{
}

void Dog::Voice()
{
    std::cout << "The " << breed << " barks loudly!" << std::endl;
}

Cat::Cat(std::string e, std::string f, int w, int a, bool i, double t, bool n)
    : Animal(4, 0, w), eyeColor(e), furColor(f), age(a), isIndoor(i), tailLength(t), isNeutered(n)
{
}

void Cat::Voice()
{
    std::cout << "The cat purrs softly." << std::endl;
}

Chicken::Chicken(int e, std::string f, int w, bool cf, int a, double wing, bool b)
    : Animal(2, 0, w), eggsPerWeek(e), featherColor(f), canFly(cf), age(a), wingSpan(wing), isBroody(b)
{
}

void Chicken::Voice()
{
    std::cout << "The chicken clucks!" << std::endl;
}

Kangaroo::Kangaroo(bool s, double j, double p, int w, std::string d, int a, double t)
    : Animal(2, 2, w), hasSack(s), jumpHeight(j), pouchSize(p), diet(d), age(a), tailLength(t)
{
}

void Kangaroo::Voice()
{
    std::cout << "The kangaroo thumps loudly!" << std::endl;
}

Lion::Lion(std::string g, int w, double m, int a, bool alpha, bool carn)
    : Animal(4, 0, w), gender(g), maneSize(m), age(a), isAlpha(alpha), isCarnivore(carn)
{
}

void Lion::Voice()
{
    std::cout << "The lion roars fiercely!" << std::endl;
}

Penguin::Penguin(int a, int w, double s, bool cf, double h, std::string st)
    : Animal(2, 0, w), age(a), swimSpeed(s), canFly(cf), height(h), speciesType(st)
{
}

void Penguin::Voice()
{
    std::cout << "The penguin squawks!" << std::endl;
}
