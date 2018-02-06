#include <iostream>

using namespace std;

void inmangmotchieu(int *mang, int num)
{
    for (int i = 0; i < num; i++)
    {
        cout << i << "\t" << mang[i] << endl;
    }
}

int main()
{
    int mang[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    inmangmotchieu(mang, 12);
}