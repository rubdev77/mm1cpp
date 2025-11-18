#include <iostream>
#include "ChessBoard.h"
void ChessBoard::Clear()
{
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                (*this)[i][j] = 0;
}
void ChessBoard::Print()
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
void ChessBoard::Init()
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