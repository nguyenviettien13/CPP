#include <iostream>

using namespace std;

int main()
{
    int mang[5] = {1, 2, 3, 4, 5};
    int *pt = mang;
    for (int i = 0; i < 5; i++)
    {
        cout << *(pt + i) << "\t" << pt + i << endl;
    }
}