#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
void BubbleSort(std::vector<T>& arr)
{
    for(auto i = 0; i < arr.size() - 1; i++)
    {
        for(auto j = 0; j < arr.size() - i - 1; j++)
        {
        if(arr[j]>arr[j+1])
        std::swap(arr[j], arr[j+1]);
        }
    }
}


int main()
{
    std::vector<int> arr{7, 1, -10, 48, 10, 9, 11};
    for(auto i : arr)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    BubbleSort<int>(arr);
    for(auto i : arr)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}