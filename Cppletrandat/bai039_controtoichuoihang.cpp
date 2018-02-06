#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    char mang[10] = "xin chao";
    mang[0] = 'X';
    cout << mang << endl;

    const char *pt;
    pt = "xin chao";
    // pt[0] = 'X'; ta khong the thay doi cac ky tu trong chuoi
    cout << pt << endl;

    // char *pointer = pt;  // ta khong thay thay gan mot con tro const char* cho char *
    // cout << pointer << endl;
}