#include <iostream>
#include <ctime>
#include <cstdlib>

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
        delete [] mat;
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

    void Init()
    {
        srand(time(0));
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                mat[i][j] = std::rand()%10;
            }
        }
    }
    void Print() const
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
    friend std::ostream& operator<<(std::ostream& os, const Mat& obj);
};

std::ostream& operator<<(std::ostream& os, const Mat& obj)
{
    if(obj.mat==nullptr)
    {
        os << "Invalid";
        return os;
    }
    for(int i = 0; i < obj.n; i++)
    {
        for(int j = 0; j < obj.m; j++)
        {
            os << obj.mat[i][j] << " ";
        }
        os << "\n";
    }
    return os;
}


int main()
{
    Mat obj1(3, 4);
    obj1.Init();
    obj1.Print();
    std::cout << std::endl;
        std::cout << obj1;
    return 0;
}