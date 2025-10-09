#include <iostream>
#include <new>


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
	return 0;
}