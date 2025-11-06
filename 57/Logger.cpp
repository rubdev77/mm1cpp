#include <iostream>
#include <fstream>
#include <string>
#include "Logger.h"

Logger::Logger(const Matrix &m_mat, const std::string &fname) 
{
    this->obj = m_mat;
    this->filename = fname;
}

void Logger::Log()
{
    std::ofstream out(filename); 

    if (out.is_open())
    {
        for (int i = 0; i < obj.retn(); i++)
        {
            for (int j = 0; j < obj.retm(); j++)
            {
                out << std::to_string(obj[i][j]) << " ";
            }
            out << std::endl;
        }
        out.close(); 
    }
}
