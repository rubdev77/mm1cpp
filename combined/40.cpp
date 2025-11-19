#include <iostream>
#include <cstdlib>


void my_malloc(std::size_t size, int **ptr)

{
        *ptr = (int*)malloc(size);
        if(!(*ptr))
        std::cout << "Allocation Failed" << std::endl;
        else
        std::cout << "Succesfully allocated" << std::endl;
}


int main()
{
        int *ptr;
        my_malloc(8, &ptr);
        std::cout << *ptr << std::endl;
    return 0;
}