#include <iostream>

int count;
extern void write_extern();

int main()
{
    std::cout << "Hello World" << std::endl;
    std::cout << "Goodbye World" << std::endl;
    count = 5;
    write_extern();
}