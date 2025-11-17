#include <iostream>
#include "Matrix.h"

class ChessBoard : public Matrix
{


    public:
    ChessBoard() : Matrix(8,8)
    {

    }
    void Clear()
    {
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                (*this)[i][j] = 0;
    }
    void Print() override
    {
        std::cout << "<<<   Print ChessBoard   >>>\n" << std::endl;
        for(int i = 0; i < n; i++)
        {   
        for(int j = 0; j < m; j++)
        {
                std::cout << mat[i][j] << " ";
        }
        std::cout << std::endl;
        }
    }
    void Init() override
    {
        std::cout << "<<< Init for ChessBoard >>>" << std::endl;
        for(int i = 0; i < n; i++)
        {
        for(int j = 0; j < m; j++)
        {
            mat[i][j] = i+j;
        }
        }
    }
};

int main()
{
    Matrix * mat = new ChessBoard;
    mat->Init();
    mat->Print();
    return 0;
}
