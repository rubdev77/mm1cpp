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
        std::cout << "Male or Female: " << mf << std::endl;
    }

    bool Legal()
    {
        if(hasDocuments && age >= 16)
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
    Engine engine;

    public:
    Car(std::string mdl, std::string clr, int yr, Engine eng)
    {
        model = mdl;
        color = clr;
        year = yr;
        engine = eng;
    }

    Car(Car & oth)
    {
        this -> model = oth.model;
        this -> color = oth.color;
        this -> year = oth.year;
        this -> engine = oth.engine;
    }
    Car & operator = (Car & oth)
    {
        if(this==&oth)
        {
            return *this;
        }
        model = oth.model;
        color = oth.color;
        year = oth.year;
        engine = oth.engine;
        return *this;
    }
    void PrintOptions()
    {
        std::cout << "Model: " << model << std::endl;
        std::cout << "Color: " << color << std::endl;
        std::cout << "Year: " << year << std::endl;
        engine.PrintEngineProp();
    }

    void ChangeColor(std::string newcl)
    {
        color = newcl;
    }

    void DriveCar(Driver &mydriver)
    {
        if(mydriver.Legal() && engine.Normal())
        {
            std::cout << "You can drive your car with this options:" << std::endl;
            mydriver.PrintDriverProp();
            engine.PrintEngineProp();
        }
        else if(mydriver.Legal() && engine.Normal() == false)
        {
            std::cout << "You can't drive your car! Check your engine!" << std::endl;
            engine.PrintEngineProp();
        }
        else if(mydriver.Legal() == false && engine.Normal())
        {
            std::cout << "You can't drive your car! Check the requirements for driving!" << std::endl;
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
    Engine V10(1200, true);
    Car Bmw("Bmw M5 Competition", "Black", 2024, V10);
    Driver R(18, true, "Male");
    Bmw.DriveCar(R);
    return 0;
}
