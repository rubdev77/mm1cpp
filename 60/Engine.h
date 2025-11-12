#ifndef ENGINE_H
#define ENGINE_H
class Engine
{
    private:
    int hps;
    bool hasOil;

    public:
    Engine();

    Engine(int horse, bool ol);

    void PrintEngineProp();
    bool Normal();

    void SetEngine(int horse, bool oil);
};
#endif