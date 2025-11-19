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

    Mat (Mat & oth)
    {
        this -> n = oth.n;
        this -> m = oth.m;
        mat = new int*[n];
        for(int i = 0; i < n; i++)
        {
            mat[i] = new int[m];
            for(int j = 0; j < m; j++)
            {
                mat[i][j] = oth.mat[i][j];
            }
        }
    }

    Mat & operator =(Mat & oth)
    {
        if(this==&oth)
        {
            return *this;
        }
        n = oth.n;
        m = oth.m;
        mat = new int*[n];
        for(int i = 0; i < n; i++)
        {
            mat[i] = new int[m];
            for(int j = 0; j < m; j++)
            {
                mat[i][j] = oth.mat[i][j];
            }
        }
        return *this;
    }

        ~Mat()
    {
        
        for(int i = 0; i < n; i++)
        {
            delete [] mat[i];
        }
        delete mat;
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
};


int main()
{

    
    return 0;
}