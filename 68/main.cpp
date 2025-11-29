#include <iostream>
#include "Animal.h"
#include "Zoo.h"
#include "Dog.h"
#include "Cat.h"
#include "Lion.h"
#include "Chicken.h"
#include "Kangaroo.h"
#include "Penguin.h"
#include <iostream>
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