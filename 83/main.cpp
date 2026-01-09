#include <iostream>
#include "Stack.h"


int main()
{
    Stack<int> my_s;

    my_s.push(5);
    my_s.push(6);
    my_s.push(7);
    my_s.push(8);
    my_s.push(9);

    my_s.Print();

    my_s.pop();

    my_s.Print();


    std::cout << my_s.top() << std::endl;

    std::cout << my_s.empty() << std::endl;
    
    return 0;
}
