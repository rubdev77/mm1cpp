#include <iostream>
#include <string>
#include "Reader.h"

Reader::Reader(std::string filename)
{
    txt = filename;
}

Matrix Reader::getResult()
{
    std::ifstream inp(txt);
    std::string total;
    int lineCount = 0;
    int rows = 0;

    if (!inp.is_open())
    {
        std::cerr << "Error can't open " << txt << '\n';
        return Matrix(0, 0);
    }

    std::string line;
    while (std::getline(inp, line))
    {
        ++lineCount;
        total += line + ' '; 

        if (lineCount == 1) 
        {
            rows = 1;
            for (int k = 0; k < line.size(); k++)
                if (line[k] == ' ')
                    rows++;
        }
    }

    inp.close();

    Matrix result(lineCount, rows);

    int i = 0, j = 0;
    std::string num;
    for (int k = 0; k < total.size(); k++)
    {
        if (total[k] != ' ')
        {
            num += total[k];
        }
        else
        {
            if (!num.empty())
            {
                result[i][j] = std::stoi(num);
                num = "";
                j++;
                if (j == rows)
                {
                    j = 0;
                    i++;
                }
            }
        }
    }

    return result;
}
