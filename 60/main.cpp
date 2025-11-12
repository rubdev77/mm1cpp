#include <iostream>
#include "Car.h"



class Bmw : public Car
{
    private:
    std::string model;

    public:
    Bmw(std::string m, std::string clr, int yr, Engine & eng) : Car(clr, yr, eng), model(m)
    {

    }

    void TurboMode()
    {
            std::cout << "Turbo mode activated on Bmw " << model << "!" << std::endl;
            std::cout << "Speed and power increased!" << std::endl;
    }

    void PrintOptions()
    {
            std::cout << ":... BMW ...:" << std::endl;
            std::cout << "\n\n";
            Car::PrintOptions();
            std::cout << "Model: " << model << std::endl;
    }

    ~Bmw() = default;
};



class Audi : public Car
{
    private:
    std::string model;
    bool quattro;

    public:
    Audi(std::string m, std::string clr, int yr, Engine & eng, bool q) : Car(clr, yr, eng), model(m), quattro(q)
    {

    }

    void DriveMode()
    {
            if(quattro)
            std::cout << "Audi " << model << " Uses Quattro all-wheel drive!" << std::endl;
            else
            std::cout << model << " Uses standard front-wheel drive!" << std::endl;
    }

    void PrintOptions()
    {
            std::cout << ":... AUDI ...:" << std::endl;
            std::cout << "\n\n";
            Car::PrintOptions();
            std::cout << "Model: " << model << std::endl;
            std::cout << "Quattro: " << std::boolalpha << quattro << std::endl;
    }

    ~Audi() = default;
};



class Btr : public Car
{
    private:
    std::string model;
    bool armored;

    public:
    Btr(std::string m, std::string clr, int yr, Engine & eng, bool arm) : Car(clr, yr, eng), model(m), armored(arm)
    {

    }

    void EngageDefense()
    {
            if(armored)
                    std::cout << "Btr" << model << " has engaged armor defense mode!" << std::endl;
            else
                    std::cout << "Btr" << model << " has no armor defense system!" << std::endl;
    }

    void PrintOptions()
    {
            std::cout << ":... BTR ...:" << std::endl;
            std::cout << "\n\n";
            Car::PrintOptions();
            std::cout << "Model: Btr" << model << std::endl;
            std::cout << "Armored: " << std::boolalpha << armored << std::endl;
    }

    ~Btr() = default;
};



int main()
{
        Engine eng1(500, true);
        Engine eng2(350, true);
        Engine eng3(800, false);

        Bmw b1("M5 F90 Competition", "Midnight Blue", 2020, eng1);
        Audi a1("RS7 Sport", "White metalic", 2022, eng2, true);
        Btr t1("-60", "Camuflage", 1950, eng3, true);

        b1.PrintOptions();
        b1.TurboMode();

        std::cout << std::endl;

        a1.PrintOptions();
        a1.DriveMode();

        std::cout << std::endl;

        t1.PrintOptions();
        t1.EngageDefense();

        return 0;
}
