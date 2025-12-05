#include <iostream>
#include "Pieces.h"

King::King(char c) : Piece(c) {}

void King::move() override {
    std::cout << "King moving" << std::endl;
}

Queen::Queen(char c) : Piece(c) {}

void Queen::move() override {
    std::cout << "Queen moving" << std::endl;
}

Rook::Rook(char c) : Piece(c) {}

void Rook::move() override {
    std::cout << "Rook moving" << std::endl;
}

Bishop::Bishop(char c) : Piece(c) {}

void Bishop::move() override {
    std::cout << "Bishop moving" << std::endl;
}

Knight::Knight(char c) : Piece(c) {}

void Knight::move() override {
    std::cout << "Knight moving" << std::endl;
}

Pawn::Pawn(char c) : Piece(c) {}

void Pawn::move() override {
    std::cout << "Pawn moving" << std::endl;
}