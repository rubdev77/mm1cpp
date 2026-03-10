#include <fcntl.h>
#include <unistd.h>
#include <iostream>

int main() {
    int fd = open("output.txt", O_WRONLY | O_CREAT, 0644);
    
    std::cout << "Hello World" << std::endl;
    
    close(fd);
    
    return 0;
}