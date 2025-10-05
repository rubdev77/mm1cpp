#include <iostream>
const int size = 10;
int** makedynamicmat(int row, int column, int num)
{
	int** mat = new int* [column];
	for (int i = 0; i < column; i++)
	{
		mat[i] = new int[row];
	}
	for (int i = 0; i < column; i++)
	{
		for (int j = 0; j < row; j++)
		{
			*(*(mat + i) + j) = num;
		}
	}
	return mat;
}
int main()
{
    int sizemat = 8;
	int** arr = makedynamicmat(sizemat, sizemat, 3);
	
	for (int i = 0; i < sizemat; i++)
		delete[] arr[i];
	delete[] arr;

	return 0;
}