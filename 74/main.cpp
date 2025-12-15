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
    Dog(std::string b, std::string f, int a, bool d, double t, bool c) : Animal(4, 0), breed(b), furColor(f), age(a), isDomesticated(d), tailLength(t), hasCollar(c) 
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
    bool isIndoor;
    double tailLength;
    bool isNeutered;
public:
    Cat(std::string e, std::string f, int a, bool i, double t, bool n) : Animal(4, 0), eyeColor(e), furColor(f), age(a), isIndoor(i), tailLength(t), isNeutered(n) { }

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
    double weight;
    bool isAlpha;
    bool isCarnivore;
public:
    Lion(std::string g, double m, int a, double w, bool alpha, bool carn) : Animal(4, 0), gender(g), maneSize(m), age(a), weight(w), isAlpha(alpha), isCarnivore(carn) { }

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
    double wingSpan;
    bool isBroody;
public:
    Chicken(int e, std::string f, bool cf, int a, double w, bool b) : Animal(2, 0), eggsPerWeek(e), featherColor(f), canFly(cf), age(a), wingSpan(w), isBroody(b) { }

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
    double tailLength;
public:
    Kangaroo(bool s, double j, double p, std::string d, int a, double t) : Animal(2, 2), hasSack(s), jumpHeight(j), pouchSize(p), diet(d), age(a), tailLength(t) { }

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
    double height;
    double weight;
    std::string speciesType;
public:
    Penguin(int a, double s, bool cf, double h, double w, std::string st) : Animal(2, 0), age(a), swimSpeed(s), canFly(cf), height(h), weight(w), speciesType(st) { }

    void Voice() 
    {
        std::cout << "The penguin squawks!" << std::endl;
    }
};

class Zoo
{
    private:
    Animal ** m_arr;
    int n;
    public:
    Zoo(Animal * animal[], int n) : n(n)
    {   
        m_arr = new Animal*[n];
        for(int i = 0; i < n; i++)
        {
            m_arr[i] = animal[i];   
        }
    }
    ~Zoo()
    {
        for(int i = 0; i < n; i++)
        {
            delete m_arr[i];
        }
        delete [] m_arr;
    }
    public:
    void MakeVoices() const
    {
        for (int i = 0; i < n; i++)
            m_arr[i]->Voice();
    }
};
// stugelu mexanizm kamayakan classi hamar
void check(Dog * obj)
{
    Animal * a = dynamic_cast<Animal*>(obj);
    if(nullptr!=a)
    std::cout << "Its an animal object!" << std::endl;
    else
    std::cout << "Its not an animal object!" << std::endl;
}

int main() {
    
    Dog d("Bulldog", "Brown", 3, true, 0.57, true);

    check(&d);
    return 0;
}