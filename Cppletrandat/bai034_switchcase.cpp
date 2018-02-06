#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int thang;
    cout << "moi ban nhap thang: " << endl;
    cin >> thang;
    switch (thang)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << " thang co 31 ngay" << endl;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << "thang co 30 ngay" << endl;
        break;
    case 2:
        cout << "thang co 28 hoac 29 ngay" << endl;
        break;
    default:
        cout << "thang khong hop le" << endl;
    }
}