#include <iostream>
#include <ctime>
#include <cstdlib>


int string_to_int(const char *str)
{
    int result = 0;
    while (*str)
    {
        result = result * 10 + (*str - '0');
        str++;
    }
    return result;
}

int** makedynamicmat(int row, int column)
{
    srand(time(0));

    int** mat = (int**)malloc(row * sizeof(int*));
    for (int i = 0; i < row; i++)
        mat[i] = (int*)malloc(column * sizeof(int));

    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
            mat[i][j] = rand() % 10;

    return mat;
}

void print(int **arr, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            std::cout << arr[i][j] << " ";
        std::cout << std::endl;
    }
}

void freemat (int **mat, int rows) 
{
        for(int i = 0; i < rows; i++)
        {
            free(mat[i]);
        }
        free(mat);
}

int main(int argc, char *argv[])
{
    

    int rows = string_to_int(argv[1]);
    int cols = string_to_int(argv[2]);

    int** arr = makedynamicmat(rows, cols);

    print(arr, rows, cols);

   freemat(arr, rows);

    return 0;
}