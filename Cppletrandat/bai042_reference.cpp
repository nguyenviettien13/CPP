#include <iostream>
#include <stdlib.h>

int main()
{
    int a = 10;
    int &b = a;
    b = 11;
    std::cout << b << std::endl;
    std::cout << a << std::endl;

    //Theo ly thuyet reference b khong the thay doi gia tri.
    int c = 22;
    b = c;
    b = 23;
    std::cout << c << std::endl;
    std::cout << b << std::endl;
    std::cout << a << std::endl;
}