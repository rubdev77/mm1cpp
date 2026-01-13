#include <iostream>
#include <stack>
#include "Tree.h"
#include "Set.h"

int main()
{
    Set<int> a;
    a.add(3);
    a.add(4);
    a.add(5);
    a.add(2);
    a.add(1);

    int * arr = a.toArr();
    
    for(int i = 0; i < 5; i++)
    {
        std::cout << arr[i] << std::endl;
    }

    delete [] arr;
}