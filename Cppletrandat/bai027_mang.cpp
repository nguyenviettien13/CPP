#include <iostream>
#include <string>

using namespace std;

int main()
{
    char mang[5] = {'a', 'b', 'c', 'd', 'e'};
    char *pt;
    for (int i = 0; i < 5; i++)
    {
        cout << mang[i] << "\t" << endl;
    }
}