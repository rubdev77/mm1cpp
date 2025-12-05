#ifndef PIECES_H
#define PIECES_H
#include "Piece.h"

class King : public Piece
{
    public:
    void move() override;
    King(char c);
};

class Queen : public Piece
{
    public:
    Queen(char c);
    void move() override;
};


class Rook : public Piece
{
    public:
    Rook(char c);
    void move() override;
};


class Bishop : public Piece
{
    public:
    Bishop(char c);
    void move() override;
};


class Knight : public Piece
{
    public:
    Knight(char c);
    void move() override;
};

class Pawn : public Piece
{
    public:
    Pawn(char c);
    void move() override;
};

#endif