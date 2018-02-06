//code doi voi bai toan in ra day cac so nguyen nho hon N
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

//liet ke cac so nguyen to nho hon n
int prime_filter(int n);

int main()
{
    prime_filter(100);
}

int prime_filter(int n)
{
    bool *arr = (bool *)malloc((n + 1) * sizeof(int));
    arr[0] = false;
    arr[1] = false;
    for (int i = 2; i <= n; i++)
    {
        arr[i] = true;
    }
    for (int i = 2; i <= (n / 2); i++)
    {
        if (arr[i])
        {
            for (int j = 2; j <= (n / i); j++)
            {
                arr[j * i] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (arr[i])
            cout << i << endl;
    }
    free(arr);
    return 1;
}