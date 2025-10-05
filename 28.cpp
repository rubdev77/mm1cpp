#include <iostream>
const int size = 10;
int** makedynamicmat(int column, int row, int num)
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
int sum(int **mat, int n, int m)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			s += *(*(mat + i) + j);
		}
	}
	return s;
}
void bigger(int** mat, int** mat_2, int n, int m, int p, int k)
{
	bool firsthigh = false;
	if (sum(mat, n, m) > sum(mat_2, p, k))
		firsthigh = true;
	if (firsthigh == true)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				std::cout << *(*(mat + i) + j) << " ";
			}
			std::cout << std::endl;
		}
	}
	else
	{
		for (int i = 0; i < p; i++)
		{
			for (int j = 0; j < k; j++)
			{
				std::cout << *(*(mat_2 + i) + j) << " ";
			}
			std::cout << std::endl;
		}
	}
}
void delmat(int** mat, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		delete[] mat[i];
	}
	delete[] mat;
}
int main()
{
	int par[3] = { 8, 8, 1 };
	int par_2[3] = { 8, 8, 0 };
	int** arr = makedynamicmat(par[0], par[1], par[2]);
	int** arr_2 = makedynamicmat(par_2[0], par_2[1], par_2[2]);
	bigger(arr, arr_2, par[0], par[1], par_2[0], par_2[1]);
	return 0;
	delmat(arr_2, par_2[1]);
	delmat(arr, par[1]);
}