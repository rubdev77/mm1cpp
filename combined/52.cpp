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
    Mat& operator++()
    {
       
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                ++mat[i][j];
            }
        }
        return *this;
    }
    Mat operator++(int)
    {
        Mat tmp = *this;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                ++mat[i][j];
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
    Mat obj2 = ++obj1;

    obj2.Print();
    return 0;
}