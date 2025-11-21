#ifndef AQUATIC_H
#define AQUATIC_H


class Aquatic : virtual public Animal
{
    public:
    Aquatic(int l, int h);
    virtual ~Aquatic() = default;
    void Voice() override;
};



#endif