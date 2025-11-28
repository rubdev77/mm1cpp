#ifndef ZOO_H
#define ZOO_H

class Zoo
{
    private:
    Animal ** m_arr;
    int n;
    public:
    Zoo(Animal * animal[], int n);
    ~Zoo();
    Zoo(Zoo && other);
    Zoo& operator=(Zoo&& other);
    void MakeVoices() const;
};

#endif
