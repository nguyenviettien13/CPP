#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int arr[100];
    for (int i = 0; i < 100; i++)
    {
        arr[i] = rand() % 4000;
        cout << arr[i] << endl;
    }

    int max = 0;
    for (int i = 0; i < 100; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    cout << "so lon nhat la: " << max << endl;
}