#include <iostream>

void swap(int *a, int *b)
{
    int tg;
    tg = *a;
    *a = *b;
    *b = tg;
}

int main()
{
    int a = 2;
    int b = 3;
    std::cout << "truoc khi swap: " << a << b << std::endl;
    swap(&a, &b);
    std::cout << "sau khi swap: " << a << b << std::endl;
}