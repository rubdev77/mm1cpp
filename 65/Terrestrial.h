#ifndef TERRESTRIAL_H
#define TERRESTRIAL_H

class Terrestrial : virtual public Aquatic, virtual public Amphibian
{
    public:
    Terrestrial(int l, int h);
    virtual ~Terrestrial() = default;
    void Voice() override;
};

#endif