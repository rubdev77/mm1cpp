#ifndef PIECE_H
#define PIECE_H


class Piece
{
    protected:
    char color;
    public:
    Piece(char c);
    virtual void move() = 0;
    virtual ~Piece() = default;
    char getColor() const;
};


#endif