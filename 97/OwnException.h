#ifndef OWNEXCEPTION_H
#define OWNEXCEPTION_H

class MyException : public std::exception
{
    private:
    std::string msg;
    public:
    explicit MyException(const std::string & msg) : msg(msg)
    {

    }
    const char * what() const noexcept override;
};

const char * MyException::what() const noexcept
{
    return msg.c_str();
}

#endif