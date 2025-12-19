#ifndef CAR_H
#define CAR_H
class Car
{
    private:
    std::string color;
    int year;

    public:
    Car(std::string clr, int yr);

    Car(const Car & oth);
    Car & operator = (const Car & oth);
    void PrintOptions() const;

    void ChangeColor(std::string newcl);
};
#endif