#include <iostream>

int cong(int, int);
float cong(float, float);
int *cong(int *, int);
int main()
{
    int a = 3;
    int b = 4;
    float c = 1.2;
    float d = 2.3;
    int mang[3] = {1, 2, 10};
    std::cout << cong(a, b) << std::endl;
    std::cout << cong(c, d) << std::endl;
    std::cout << *cong(mang, 2) << std::endl;
}

int cong(int a, int b)
{
    return a + b;
}

float cong(float a, float b)
{
    return a + b;
}
int *cong(int *a, int b)
{
    return a + b;
}