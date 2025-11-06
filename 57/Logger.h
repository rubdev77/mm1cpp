#ifndef LOGGER_H
#define LOGGER_H

#include "Matrix.h"

class Logger
{
private:
    Matrix obj;
    std::string filename;

public:
    Logger() = delete;
    Logger(const Logger&) = delete;
    Logger& operator=(const Logger&) = delete;
    ~Logger() = default;

    Logger(const Matrix& m_mat, const std::string& fname);

    void Log();
};

#endif
