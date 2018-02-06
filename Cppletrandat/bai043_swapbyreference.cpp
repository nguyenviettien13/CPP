#include <iostream>

void swappointer(int *a, int *b)
{
    int tg;
    tg = *a;
    *a = *b;
    *b = tg;
}

void swapreference(int &a, int &b)
{
    int tg;
    tg = a;
    a = b;
    b = tg;
}

int main()
{
    int a = 4;
    int b = 5;
    swapreference(a, b);
    std::cout << "swap by reference : " << a << "   " << b << std::endl;
    swappointer(&a, &b);
    std::cout << "swap by pointer : " << a << "  " << b << std::endl;
}