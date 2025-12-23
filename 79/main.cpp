#include <iostream>
#include "SingleList.h"


int main()
{
    Rub::List<int> l;
    l.push_front(1);
    l.push_front(2);
    l.push_front(3);
    l.push_front(4);
    l.pop_front();
    l.push_back(5);    
    l.pop_back();   
    l.Print();      
    return 0;
}