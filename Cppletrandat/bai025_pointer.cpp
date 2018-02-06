#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int mang[5] = {1, 2, 3, 4, 5};
    cout << "lay gia tri phan tu dau tien theo cach 1: " << mang[0] << "\t" << &mang[0] << endl;
    cout << "lay gia tri phan tu dau tien theo cach 1: " << *mang << "\t" << mang << endl;
}