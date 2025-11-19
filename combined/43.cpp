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
    void init()
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
    void print()
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
    ~Mat()
    {
        
        for(int i = 0; i < n; i++)
        {
            delete [] mat[i];
        }
        delete mat;
    }
};


int main()
{

    Mat a(10, 10);
    a.init();
    a.print();
    return 0;
}