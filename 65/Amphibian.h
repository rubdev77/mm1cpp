#ifndef AMPHIBIAN_H
#define AMPHIBIAN_H


class Amphibian : virtual public Animal
{
    public:
    Amphibian(int l, int h);
    virtual ~Amphibian() = default;
    void Voice() override;
};



#endif