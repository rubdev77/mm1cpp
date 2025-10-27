#include <iostream>
#include <ctime>

class Mat
{
    private:
    int n   ;
    int m;
    int **mat;
    public:
    Mat(int row, int column)
    {
        n = row;
        m = column;
        mat = new int*[n];
        for(int i = 0; i < n; i++)
        {
            mat[i] = new int[m];
        }
    }
        ~Mat()
    {
        
        for(int i = 0; i < n; i++)
        {
            delete [] mat[i];
        }
        delete mat;
    }
    void Init()
    {
        srand(time(0));
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                mat[i][j] = rand()%10;
            }
        }
    }
    void Print()
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                std::cout << mat[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
    void Turn()
    {
         for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < m; j++) {
            int t = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = t;
        }
    }

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m/2; j++)
            {
                int t = mat[i][j];
                mat[i][j] = mat[i][n-j-1];
                mat[i][n-j-1] = t;
            }
        }
    }
};


int main()
{
    Mat mat1(4,4);
    mat1.Init();
    mat1.Print();
    mat1.Turn();
    std::cout << std::endl;
        std::cout << std::endl;
        mat1.Print();
    return 0;
}