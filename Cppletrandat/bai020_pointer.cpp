#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int hoan = 21;
    int bang = 2;
    int thuy = 1996;
    cout << hoan << "  Dia chi cua bien hoan: " << &hoan << endl;
    cout << bang << "  Dia chi cua bien bang: " << &bang << endl;
    cout << thuy << "  Dia chi cua bien thuy: " << &thuy << endl;

    int *pointer;
    pointer = &hoan;
    cout << hoan << "  Dia chi cua bien hoan: " << hex << pointer << endl;

    pointer = &bang;
    cout << bang << "  Dia chi cua bien hoan: " << hex << pointer << endl;

    pointer = &thuy;
    cout << thuy << "  Dia chi cua bien hoan: " << hex << pointer << endl;

    cout << sizeof(int) << endl;
    cout << sizeof(pointer) << endl;
    // int diachi = 0;
    // diachi = (int)pointer;
    // cout << thuy << "  Dia chi kieu int cua bien thuy : " << diachi << endl;
}