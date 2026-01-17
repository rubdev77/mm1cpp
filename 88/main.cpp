#include <iostream>
#include <unordered_map>
#include "Animal.h"
#include "Animals.h"

struct B
{
    std::size_t operator()(const Animal* a) const
    {
        return std::hash<int>{}(a->getW());
    }
};

struct A
{
    bool operator()(const Animal* a, const Animal* b) const
    {
        return a->getW() == b->getW();
    }
};

int main()
{
    Penguin p(3, 50, 10.3, false, 0.6, "Emperor");
    Lion l("Male", 50, 1.7, 5, true, true);
    Kangaroo k(true, 2.1, 0.4, 60, "Herbivore", 4, 1.2);
    Cat c("Green", "Black", 90, 2, true, 0.31, false);

    std::unordered_map<Animal*, int, B, A> map;

    map[&p] = 1;
    map[&l] = 2;
    map[&k] = 3;
    map[&c] = 4;

    for(auto x : map)
    {
        std::cout << x.first->getW() << std::endl;
    }

    return 0;
}
