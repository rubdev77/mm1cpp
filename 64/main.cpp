#include <iostream>
#include "TvControler.h"


int main()
{
    TControl obj(false, 41, 8);
    obj.TurnOn();
    obj.TurnOff();
    obj.RightStick();
    obj.LeftStick();
    obj.UpStick();
    obj.DownStick();
    return 0;
}