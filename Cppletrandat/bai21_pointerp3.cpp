#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int bienx = 9;
    int *pt;
    pt = &bienx;
    cout << bienx << " dia chi cua no: " << &bienx << endl;
    cout << *pt << " dia chi cua no: " << pt << endl;
}