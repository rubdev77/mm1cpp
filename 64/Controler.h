#ifndef CONTROLER_H
#define CONTROLER_H

class Controler
{
    public:
    virtual void TurnOn() = 0;
    virtual void TurnOff() = 0;
    virtual void LeftStick() = 0;
    virtual void RightStick() = 0;
    virtual void UpStick() = 0;
    virtual void DownStick() = 0;
    virtual void Additional() = 0;
};


#endif