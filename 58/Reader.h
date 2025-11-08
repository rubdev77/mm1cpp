#ifndef READER_H
#define READER_H
#include <fstream>
#include "Matrix.h"

class Reader
{
    private:
    std::string txt;
    std::ifstream inp;
    Matrix obj;
    public:
    Reader() = delete;
    Reader(std::string );
    Reader(const Reader&) = delete;
    Reader& operator=(const Reader&);
    ~Reader() = default;
    public:
    Matrix getResult();
};
#endif