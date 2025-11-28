#include <iostream>
#include "Animal.h"
#include "Zoo.h"

class Dog : public Animal {
private:
    std::string breed;
    std::string furColor;
    int age;
    int w;
    bool isDomesticated;
    double tailLength;
    bool hasCollar;
public:
    Dog(std::string b, std::string f, int w, int a, bool d, double t, bool c) : Animal(4, 0, w), breed(b), furColor(f), age(a), isDomesticated(d), tailLength(t), hasCollar(c) 
    { }

    void Voice() 
    {
        std::cout << "The " << breed << " barks loudly!" << std::endl;
    }
};


class Cat : public Animal {
private:
    std::string eyeColor;
    std::string furColor;
    int age;
    int w;
    bool isIndoor;
    double tailLength;
    bool isNeutered;
public:
    Cat(std::string e, std::string f, int w, int a, bool i, double t, bool n) : Animal(4, 0, w), eyeColor(e), furColor(f), age(a), isIndoor(i), tailLength(t), isNeutered(n) { }

    void Voice() 
    {
        std::cout << "The cat purrs softly." << std::endl;
    }
};


class Lion : public Animal {
private:
    std::string gender;
    double maneSize;
    int age;
    int w;
    bool isAlpha;
    bool isCarnivore;
public:
    Lion(std::string g, int w, double m, int a, bool alpha, bool carn) : Animal(4, 0, w), gender(g), maneSize(m), age(a), isAlpha(alpha), isCarnivore(carn) { }

    void Voice() 
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
    int w;
    double wingSpan;
    bool isBroody;
public:
    Chicken(int e, std::string f, int w, bool cf, int a, double wing, bool b) : Animal(2, 0, w), eggsPerWeek(e), featherColor(f), canFly(cf), age(a), wingSpan(wing), isBroody(b) { }

    void Voice() 
    {
        std::cout << "The chicken clucks!" << std::endl;
    }
};


class Kangaroo : public Animal {
private:
    bool hasSack;
    double jumpHeight;
    double pouchSize;
    std::string diet;
    int age;
    int w;
    double tailLength;
public:
    Kangaroo(bool s, double j, double p, int w, std::string d, int a, double t) : Animal(2, 2, w), hasSack(s), jumpHeight(j), pouchSize(p), diet(d), age(a), tailLength(t) { }

    void Voice() 
    {
        std::cout << "The kangaroo thumps loudly!" << std::endl;
    }
};


class Penguin : public Animal {
private:
    int age;
    double swimSpeed;
    bool canFly;
    int w;
    double height;
    std::string speciesType;
public:
    Penguin(int a, int w, double s, bool cf, double h, std::string st) : Animal(2, 0, w), age(a), swimSpeed(s), canFly(cf), height(h), speciesType(st) { }

    void Voice() 
    {
        std::cout << "The penguin squawks!" << std::endl;
    }
};



int main() {
    
    // Animal * animal[] = 
    // {
    //     new Dog("Bulldog", "Brown", 3, true, 0.57, true),
    //     new Cat("Green", "Black", 2, true, 0.31, false),
    //     new Lion("Male", 1.7, 5, 192.8, true, true),
    //     new Chicken(5, "White", false, 1, 0.48, true),
    //     new Kangaroo(true, 2.1, 0.4, "Herbivore", 4, 1.2),
    //     new Penguin(3, 10.3, false, 0.6, 15.9, "Emperor")
    // };
    // Zoo gazananoc(animal, 6);
    // gazananoc.MakeVoices();
    Penguin p(3, 50, 10.3, false, 0.6, "Emperor");
    Lion l("Male", 50, 1.7, 5, true, true);
    Kangaroo k(true, 2.1, 0.4, 60, "Herbivore", 4, 1.2);
    Cat c("Green", "Black", 90, 2, true, 0.31, false);
    bool x = p<l;
    bool y = p == l;
    bool z = k < c;
    bool f = c > k;
    std::cout << std::boolalpha; 
    std::cout << "x = " << x << " " << "y = " << y << " " << "z = " << z << " " << "f = " << f << std::endl;
    return 0;
}