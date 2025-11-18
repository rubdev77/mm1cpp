#ifndef CHESSBOARD_H
#define CHESSBOARD_H

#include "Matrix.h"

class ChessBoard : public Matrix
{


    public:
    ChessBoard() : Matrix(8,8)
    {
    }
    void Clear();
    void Print() override;
    void Init() override;
};





#endif