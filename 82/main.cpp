#include <iostream>
#include "Queue.h"


int main()
{
    Queue<int> my_q;

    my_q.push(1);

    my_q.push(2);


    std::cout << my_q.size() << std::endl;

    my_q.Print();

    my_q.pop();


    my_q.Print();
    return 0;
}
