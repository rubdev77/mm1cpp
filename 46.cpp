#include <iostream>
#include <string>

class Car;

class Engine;

class Driver
{
    private:
    int age;
    bool hasDocuments;
    std::string mf;
    public:
    Driver(int ag, bool hs, std::string morf)
    {
        age = ag;
        hasDocuments = hs;
        mf = morf;
    }
    void PrintDriverProp()
    {
        std::cout << "Age: " << age << std::endl;
        std::cout << "With Documents: " << std::boolalpha << hasDocuments << std::endl;
        std::cout << "Male of Female: " << mf << std::endl;
    }
    bool Legal()
    {
        if(hasDocuments && age>=16)
        return true;
        else
        return false;
    }
};

class Engine
{
    private:
    int hps;
    bool hasOil;
    public:
    Engine(int horse, bool ol)
    {
        hps = horse;
        hasOil = ol;
    }
    void PrintEngineProp()
    {
        std::cout << "HorsePower: " << hps << std::endl;
        std::cout << "Has oil: " << std::boolalpha << hasOil << std::endl;
    }
    bool Normal()
    {
        if(hasOil)
        return true;
        else
        return false;
    }
};

class Car
{
    private:
    std::string model;        
    std::string color;
    int year;
    int hp;
    int stage;
    
    public:
    Car(std::string mdl, std::string clr, int yr)
    {
        model = mdl;
        color = clr;
        year = yr;
    }
    void PrintOptions()
    {
        std::cout << "Model: " << model << std::endl;
        std::cout << "Color: " << color << std::endl;
        std::cout << "Year: " << year << std::endl;
    }
    void ChangeColor(std::string newcl)
    {
        color = newcl;
    }
    void DriveCar(Driver &mydriver, Engine &myengine)
    {
        if(mydriver.Legal() && myengine.Normal())
        {
        std::cout << "You can drive your car with this external options" << std::endl;
            mydriver.PrintDriverProp();
            myengine.PrintEngineProp();
        }
        else if(mydriver.Legal() && myengine.Normal()==false)
        {
            std::cout << "You can't drive your car! Check your engine!" << std::endl;
            myengine.PrintEngineProp();
        }
        else if(mydriver.Legal()==false && myengine.Normal())
        {
            std::cout << "You can't drive your car! Check the requirements for driving" << std::endl;
            mydriver.PrintDriverProp();
        }
        else
        {
            std::cout << "Please check the conditions before approaching vehicle :(" << std::endl;
        }
    }
};



int main()
{
    Car Bmw("Bmw M5 Competition", "Black", 2024);
    Engine V10(1200, 1);
    Driver R(18, 1, "Male");
    Bmw.DriveCar(R, V10);
    return 0;
}