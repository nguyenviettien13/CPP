#include <iostream>
#include <string.h>
#include <stdio_ext.h>
using namespace std;

int xinchao(string);
int main()
{
    string ten;
    std::cout << "Moi ban nhap ten: " << std::endl;
    __fpurge(stdin);
    getline(cin, ten);
    xinchao(ten);
    return 1;
}

int xinchao(string ten)
{
    cout << " Xin chao tat ca moi nguoi" << endl;
    cout << " Ten toi la: " << ten << endl;
    return 1;
}