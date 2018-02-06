#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int mang[4] = {1, 2, 3, 4};
    for (int i = 0; i < 4; i++)
    {
        cout << mang[i] << "\t" << &mang[i] << endl;
    }
}