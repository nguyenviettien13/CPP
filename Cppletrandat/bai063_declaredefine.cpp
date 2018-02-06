#include <iostream>

int cong(int, int, int = 0);
int main()
{
    int a = 3;
    int b = 4;
    int c = 2;
    std::cout << cong(a, b, c) << std::endl;
    std::cout << cong(a, b) << std::endl;
}

int cong(int a, int b, int c)
{
    return a + b + c;
}