#include <iostream>
#include <vector>

namespace Rub
{
template <typename T>
void merge(std::vector<T>& arr, int l, int mid, int r)
{
    int n = mid - l + 1;
    int N = r - mid;

    std::vector<T> a(n), b(N);

    for(int i = 0; i < n; i++)
    {
        a[i] = arr[l + i];   
    }
    for(int i = 0; i < N; i++)
    {
        b[i] = arr[mid + 1 + i];   
    }


    int i = 0, j = 0;
    int k = l;


    while(i < n && j < N)
    {
        if(a[i]<=b[j])
        {
                arr[k] = a[i];
                i++;
        }
        else
        {
            arr[k] = b[j];
            j++;
        }
        k++;
    }

    while(i < n)
    {
        arr[k] = a[i];
        i++;
        k++;
    }
    while(j < N)
    {
        arr[k] = b[j];
        j++;
        k++;
    }
}

}


template <typename T>
void MergeSort(std::vector<T>& arr, int l, int r)
{
    if(l < r)
    {

    int mid = (l + r)/2;
    
    MergeSort(arr, l, mid);
    MergeSort(arr, mid+1, r);

    Rub::merge<T>(arr, l, mid, r);

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

    MergeSort<int>(arr, 0, arr.size()-1);
    for(auto i : arr)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}