#include <iostream>

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
    Dog(std::string b, std::string f, int a, bool d, double t, bool c) : Animal(4, 0), breed(b), furColor(f), age(a), isDomesticated(d), tailLength(t), hasCollar(c) { }
    void Bark() 
    {
        std::cout << "The " << breed << " barks loudly!" << std::endl;
    }
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
    Cat(std::string e, std::string f, int a, bool i, double t, bool n) : Animal(4, 0), eyeColor(e), furColor(f), age(a), isIndoor(i), tailLength(t), isNeutered(n) { }
    void Purr() 
    {
        std::cout << "The cat purrs softly." << std::endl;
    }
};


class Lion : public Animal {
private:
    std::string gender;
    double maneSize;
    int age;
    double weight;
    bool isAlpha;
    bool isCarnivore;
public:
    Lion(std::string g, double m, int a, double w, bool alpha, bool carn) : Animal(4, 0), gender(g), maneSize(m), age(a), weight(w), isAlpha(alpha), isCarnivore(carn) { }
    void Roar() 
    {
        std::cout << "The lion roars fiercely!" << std::endl;
    }
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
    Chicken(int e, std::string f, bool cf, int a, double w, bool b) : Animal(2, 0), eggsPerWeek(e), featherColor(f), canFly(cf), age(a), wingSpan(w), isBroody(b) { }
    void LayEgg() 
    {
        std::cout << "The chicken lays an egg!" << std::endl;
    }
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
    Kangaroo(bool s, double j, double p, std::string d, int a, double t) : Animal(2, 2), hasSack(s), jumpHeight(j), pouchSize(p), diet(d), age(a), tailLength(t) { }
    void Hop() 
    {
        std::cout << "The kangaroo hops " << jumpHeight << " meters high!" << std::endl;
    }
};


class Penguin : public Animal {
private:
    int age;
    double swimSpeed;
    bool canFly;
    double height;
    double weight;
    std::string speciesType;
public:
    Penguin(int a, double s, bool cf, double h, double w, std::string st) : Animal(2, 0), age(a), swimSpeed(s), canFly(cf), height(h), weight(w), speciesType(st) { }
    void Swim() 
    {
        std::cout << "The penguin swims at " << swimSpeed << " km/h!" << std::endl;
    }
};


int main() {
    Dog d("Bulldog", "Brown", 3, true, 0.57, true);
    Cat c("Green", "Black", 2, true, 0.31, false);
    Lion l("Male", 1.7, 5, 192.8, true, true);
    Chicken ch(5, "White", false, 1, 0.48, true);
    Kangaroo k(true, 2.1, 0.4, "Herbivore", 4, 1.2);
    Penguin p(3, 10.3, false, 0.6, 15.9, "Emperor");

    d.Walk(); 
    d.Bark();
    c.Eat();
    c.Purr(); 
    l.Jump();
    l.Roar(); 
    ch.Walk(); 
    ch.LayEgg();
    k.Jump(); 
    k.Hop();
    p.Walk(); 
    p.Swim();
    return 0;
}
