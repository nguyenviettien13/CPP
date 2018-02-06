#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int bangdiem[] = {1, 2, 3, 5, 6, 7, 7, 7, 9};
    for (int i = 0; i < 10; i++)
    {
        cout << "diem ban thu " << i + 1 << " la: " << bangdiem[i] << endl;
    }
}