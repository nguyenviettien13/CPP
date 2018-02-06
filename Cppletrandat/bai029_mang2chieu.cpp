#include <iostream>

using namespace std;

int inmang(int mang[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << mang[i][j] << "\t";
        }
        cout << endl;
    }
    return 1;
}
int main()
{
    int mang[3][3] = {{1, 2, 3}, {2, 3, 4}, {3, 4, 5}};
    inmang(mang, 3, 3);
}