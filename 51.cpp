#include <iostream>
#include <ctime>

class Mat
{
    private:
    int n;
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
    Mat operator*(int k)
    {
        Mat tmp(n, m);
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                tmp.mat[i][j] = this->mat[i][j]*k;
            }
        }
        return tmp;
    }
};


int main()
{
    Mat obj1(4, 4);
    obj1.Init();
    obj1.Print();
    Mat obj2 = obj1*5;
    obj2.Print();
    return 0;
}