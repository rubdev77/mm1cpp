#include <iostream>

void print()
{
    std::cout << "end" << std::endl;
}

template <typename T, typename... Types>
void print(T val1, Types... val2)
{
   std::cout << val1 << std::endl;
   print(val2...);
}

int main()
{
    print(1, 2, "Hi");
    return 0;
}