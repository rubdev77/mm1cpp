#include <iostream>
#include "Engine.h"
Engine::Engine()
{
        hps = 0;
        hasOil = false;
}

Engine::Engine(int horse, bool ol)
{
        hps = horse;
        hasOil = ol;
}

void Engine::PrintEngineProp()
{
        std::cout << "HorsePower: " << hps << std::endl;
        std::cout << "Has oil: " << std::boolalpha << hasOil << std::endl;
}

bool Engine::Normal()
{
    if(hasOil)
        return true;
    else
        return false;
}

void Engine::SetEngine(int horse, bool oil)
{
        hps = horse;
        hasOil = oil;
}