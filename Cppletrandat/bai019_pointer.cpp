#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int x = 10;
    int b = 20;
    cout << "Dia chi cua bien x: " << &x << endl;
    cout << "Dia chi cua bien b: " << &b << endl;

    int diachix = &x;
    int diachib = &b;
    cout << "Dia chi cua bien x: " << diachix << endl;
    cout << "Dia chi cua bien b: " << diachib << endl;
}