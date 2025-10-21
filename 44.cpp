#include <iostream>
#include <string>


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



int main()
{
    Car Bmw("Bmw M5 Competition", "Black", 2024, 617, 3);
    Bmw.DriveCar();
    Bmw.PrintOptions();
    return 0;
}