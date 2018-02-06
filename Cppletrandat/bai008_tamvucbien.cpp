#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{ //muc thanh pho
    int biencucboTP1 = 1;
    int biencucboTP2 = 11;
    { //muc quan
        int biencucboTP1 = 2;
        std::cout << "bien cuc bo trong pham vi quan: " << biencucboTP1 << std::endl;
        biencucboTP2 = 22;
    }
    std::cout << "bien toan cuc biencucboTP1: " << biencucboTP1 << std::endl;
    std::cout << "bien toan cuc biencucboTP2: " << biencucboTP2 << std::endl;
}