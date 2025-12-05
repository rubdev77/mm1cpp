#include <iostream>
#include "Piece.h"

Piece::Piece(char c) : color(c) { }

char Piece::Piece() const
{
   return color; 
}