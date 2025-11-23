#include <iostream>
#include "ChessBoard.h"
#define CB ChessBoard   
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
CB::CB(CB && other)
{
    this -> n = other.n;
    this -> m = other.m;
    this -> mat = other.mat;
    other.mat = nullptr;
    other.n = 0;
    other.m = 0;
}
CB& CB::operator =(CB && other)
{
    if(this!=&other)
    {
        for(int i = 0; i < this-> n; i++)
        {
            delete [] mat[i];
        }

        delete [] mat;
        this -> n = other.n;
        this -> m = other.m;
        this -> mat = other.mat;
        other.mat = nullptr;
        other.n = 0;
        other.m = 0;
    }
    return *this;
}