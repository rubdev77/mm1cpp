#ifndef PARKING_H
#define PARKING_H
#include "Car.h"
#include <vector>
class Parking
{
    private:
    static Parking* instance;
    std::vector<Car> Cars;    
    
    Parking() {}
    public:
    Parking(const Parking& oth) = delete;
    Parking& operator=(const Parking& oth) = delete;
    static Parking* getInstance();
    void parkCar(const Car& C);
    void printCar() const;
    int size() const;
};



#endif