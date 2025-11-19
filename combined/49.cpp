#include <iostream>
class Car
{
    private:
    std::string model;        
    std::string color;
    int year;
    int hp;
    int stage;
    
    public:
    Car(std::string mdl, std::string clr, int yr, int hps, int stages)
    {
        model = mdl;
        color = clr;
        year = yr;
        hp = hps;
        stage = stages;
    }
    void PrintOptions()
    {
        std::cout << "Model: " << model << std::endl;
        std::cout << "Color: " << color << std::endl;
        std::cout << "Year: " << year << std::endl;
        std::cout << "Horsepower: " << hp << std::endl;
        std::cout << "Stage: " << stage << std::endl;
    }
    void ChangeColor(std::string newcl)
    {
        color = newcl;
    }
    void Tuning(int newstg)
    {
        stage = newstg;
    }
    void ChangeEngine(int newhps)
    {
        hp = newhps;
    }
    void DriveCar()
    {
        std::cout << "You need keys :(" << std::endl;
    }
};

class Parking
{
    private:
        Car* Cars;
        int Capacity;
    public:
        Parking(Car * Cars, int Capacity)
        {
            this->Cars = Cars;
            this->Capacity = Capacity;
        }
        void PrintCarModels()
        {
            std::cout << "There are these cars in our parking" << std::endl;
            for(int i = 0; i < Capacity; i++)
            {
               Cars[i].PrintOptions();
            }
        }
};


int main()
{
    const int limit = 3;
    Car Vehicles[limit] = 
    {
        Car("Bmw M5", "Black", 2021, 500, 2),
        Car("Bmw M4", "White", 2023, 400, 3),
        Car("Bmw M3", "Black", 2021, 230, 1)
    };
    Parking City(Vehicles, limit);
    City.PrintCarModels();  
    return 0;
}