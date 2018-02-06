#include <iostream>
#include <stdio_ext.h>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    string ten;
    string lop;
    int tuoi;
    std::cout << "Nhap vao tuoi " << std::endl;
    cin >> tuoi;
    std::cout << "Nhap vao ho va ten" << std::endl;
    __fpurge(stdin);
    getline(cin, ten);
    std::cout << "ten cua ban la: " << ten << endl;
    std::cout << "Tuoi cua ban la: " << tuoi << endl;
}