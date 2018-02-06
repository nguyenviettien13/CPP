#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    srand(time(NULL));

    //cap phat mang 1 chieu
    int kichthuoc = 0;
    cout << "nhap vao kich thuoc mang: " << endl;
    cin >> kichthuoc;
    int *mang = new int[kichthuoc];
    for (int i = 0; i < kichthuoc; i++)
    {
        mang[i] = rand() % 300;
        cout << i << "\t" << mang[i] << endl;
    }
    delete[] mang;
    //cap phat mang hai chieu
    int row;
    int col;
    cout << " Nhap vao so hang: " << endl;
    cin >> row;
    cout << "Nhap vao so cot : " << endl;
    cin >> col;
    int **mang2chieu = new int *[row];
    for (int i = 0; i < row; i++)
    {
        mang2chieu[i] = new int[col];
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            mang2chieu[i][j] = rand() % 10;
            cout << mang2chieu[i][j] << "  ";
        }
        cout << endl;
    }
}