#include <iostream>
#include <set>
#include "Animal.h"
#include "Animals.h"

struct A
{
    bool operator() (Animal * obj1, Animal * obj2) const
    {
        return (*obj1) < (*obj2);
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
    
    std::set<Animal*, A> s;

    s.insert(&p);
    s.insert(&l);
    s.insert(&k);
    s.insert(&c);


    for(auto x : s)
    {
        std::cout << x->getW() << std::endl;
    }
    return 0;
}