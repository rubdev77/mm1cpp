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
    Mat operator*(const Mat& obj) const
    {
    if (m != obj.n)
    {
         return Mat(0, 0);
    }

    Mat tmp(n, obj.m);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < obj.m; j++)
        {
            tmp.mat[i][j] = 0;
            for (int k = 0; k < m; k++)
            {
                tmp.mat[i][j] += mat[i][k] * obj.mat[k][j];
            }
        }
    }
    
    return tmp;
    }

};


int main()
{
    Mat obj1(3, 4);
    Mat obj2(4, 3);
    obj1.Init();
    obj2.Init();

    obj1.Print();
        std::cout << std::endl;
        std::cout << std::endl;
    obj2.Print();
        std::cout << std::endl;
        std::cout << std::endl;
    Mat obj3 = obj1*obj2;
    obj3.Print();
    return 0;
}