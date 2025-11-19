#include <iostream>
#include <new>

void initarr(int *a, int size)
{
	srand(time(0));
	for(int i = 0; i < size; i++)
	{
		a[i] = rand()%10;
	}
}
void* operator new(std::size_t size)
{
	std::cout << size << " = size" << "\n";
	void* ptr = std::malloc(size);
	if (ptr);
	return ptr;
	throw std::bad_alloc{};
}

void operator delete(void* ptr) noexcept
{
	std::cout << "Deleting" << "\n";
	std::free(ptr);
}




int main()
{
    int * a = new int[10];
	initarr(a, 10);
    delete [] a;
	return 0;
}