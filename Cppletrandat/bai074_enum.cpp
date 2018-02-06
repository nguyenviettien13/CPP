#include <iostream>

using namespace std;

enum Item
{
    KIEM = 100,
    SUNG = 200,
    ROCKET = 500
};

int main()
{
    int mau = 1000;
    bool isKiem = true;
    if (isKiem)
    {
        mau -= KIEM;
    }
    std::cout << mau << endl;
}