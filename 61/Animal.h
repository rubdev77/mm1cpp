#ifndef ANIMAL_H
#define ANIMAL_H

class Animal
{
    protected:
    int legs;
    int hands;
    public:
    Animal(int, int);
    virtual ~Animal() = default;
    public:
    void Walk();
    void Eat();
    void Jump();
    virtual void Voice() = 0;
};

#endif