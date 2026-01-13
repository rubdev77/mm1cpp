#ifndef ANIMAL_H
#define ANIMAL_H

class Animal
{
    protected:
    int legs;
    int hands;
    int w;
    public:
    Animal(int, int, int);
    virtual ~Animal() = default;
    public:
    void Walk();
    void Eat();
    void Jump();
    virtual void Voice() = 0;
    bool operator >(const Animal& other);
    bool operator <(const Animal& other);
    bool operator ==(const Animal& other);
    int getW();
};

#endif