#include <iostream>
#include <algorithm>
#include <list>



template <typename T>
void eraser(std::list<T> & my_list)
{
    for(auto it = my_list.begin(); it != my_list.end();)
    {
        if(*it % 2 != 0)
        {
            it = my_list.erase(it);
        }
        else
        ++it;
    }
}

int main()
{
    std::list<int> l {1, 2, 3, 4, 5};

    eraser<int>(l);

    for(auto p : l)
    std::cout << p << " ";

    std::cout << "\n";  
    return 0;   
}
