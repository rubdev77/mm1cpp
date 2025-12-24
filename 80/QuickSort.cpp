#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
void QuickSort(std::vector<T>& a, int l, int r)
{
    if(r-l <= 1)
    return;

    int pivotIndex = r - 1;
    T pivot = a[pivotIndex];
    int j = l;
    for(int i = l; i < pivotIndex; i++)
    {
        if(a[i] <= pivot)
        {
                std::swap(a[i], a[j]);
                j++;
        }
    }
    std::swap(a[j], a[pivotIndex]);
    QuickSort(a, l, j);
    QuickSort(a, l+1, r);
}



int main()
{
    std::vector<int> arr{3, 2, 0, 1, 5, 8, 7, 6, 9, 4};
    int l = 0;
    int r = arr.size();
    for(auto i : arr)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    QuickSort<int>(arr, l, r);
    for(auto i : arr)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}