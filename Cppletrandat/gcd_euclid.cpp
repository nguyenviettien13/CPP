#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int gcd(int a, int b);

int main()
{
    int a = -1000;
    int b = 11212225;
    int g = gcd(a, b);
    cout << "Uoc chung lon nhat cua" << a << " va " << b << " la " << g << endl;
}

int gcd(int a, int b)
{
    int st1 = abs(a);
    int st2 = abs(b);
    int tg = 0;
    while (st1 % st2 != 0)
    {
        tg = st1 % st2;
        st1 = st2;
        st2 = tg;
    }
    return st2;
}