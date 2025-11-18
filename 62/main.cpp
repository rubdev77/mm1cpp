#include <iostream>
#include "ChessBoard.h"


int main()
{
    Matrix * mat = new ChessBoard;
    mat->Init();
    mat->Print();
    return 0;
}
