#include <iostream>
#include "TvControler.h"


TControl::TControl(bool pwr, int tv, int chn) : isPowered(pwr), tvol(tv), ChannelNum(chn)
{

}


TControl::~TControl()
{
    isPowered = false;
    tvol = -1;
    ChannelNum = -1;
}


void TControl::TurnOn()
{
    if(isPowered)
    std::cout << "You've already turned on!" << std::endl;
    else
    {
    std::cout << "Turning on Tv!" << std::endl;
    isPowered = true;
    }
}

void TControl::TurnOff()
{
    if(!isPowered)
    std::cout << "You've already turned off!" << std::endl;
    else
    {
    std::cout << "Turning off Tv!" << std::endl;
    isPowered = true;
    }
}

void TControl::LeftStick()
{
    tvol -= 1;
    std::cout << "Volume changed to " << tvol << std::endl;
}

void TControl::RightStick()
{
    tvol += 1;
    std::cout << "Volume changed to " << tvol << std::endl;
}

void TControl::UpStick()
{
    ChannelNum += 1;
    std::cout << "Channel changed to " << ChannelNum << std::endl;
}

void TControl::DownStick()
{
    ChannelNum -= 1;
    std::cout << "Channel changed to " << ChannelNum << std::endl;
}

void TControl::Additional()
{
    std::cout << "You've opened Netflix!" << std::endl;
}