#include <iostream>

//using namespace std;

int main()
{
    int sothunhat = 35;
    int sothuhai = 45;
    int hieula = sothuhai - sothunhat;
    std::cout << "Hieu 2 so la : " << hieula << std::endl;
    std::cout << "Tong hai so la : " << sothuhai + sothunhat << std::endl;
    std::cout << "Tich hai so la : " << sothunhat * sothuhai << std::endl;
    std::cout << "Thuong hai so la : " << float(sothuhai) / sothunhat << std::endl;
}