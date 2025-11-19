#ifndef TVCONTROLER_H
#define TVCONTROLER_H

#include "Controler.h"

class TControl : public Controler
{
    private:
    bool isPowered;
    int tvol;
    int ChannelNum;
    public:
    TControl(bool, int, int);
    ~TControl();
    void TurnOn() override;
    void TurnOff() override;
    void LeftStick() override;
    void RightStick() override;
    void UpStick() override;
    void DownStick() override;
    void Additional() override;
};

#endif