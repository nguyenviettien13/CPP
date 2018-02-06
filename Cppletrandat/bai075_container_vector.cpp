#include <iostream>
#include <vector>

// using namespace std;

int main()
{
    std::vector<int> pho;
    pho.push_back(1);
    pho.push_back(2);
    pho.push_back(3);
    pho.push_back(4);
    pho.push_back(5);
    pho.push_back(6);

    std::cout << "Cach in thu 1 : " << std::endl;
    for (int i = 0; i < pho.size(); i++)
    {
        std::cout << pho[i] << std::endl;
    }

    std::cout << "cach in thu 2: " << std::endl;

    for (std::vector<int>::iterator it = pho.begin(); it != pho.end(); it++)
    {
        std::cout << *it << std::endl;
    }

    //C++11

    // for (auto it = pho.begin(); it != pho.end(); it++)
    // {
    //     std::cout << *it << std::endl;
    // }

    // for (auto &p : pho)
    // {
    //     std::cout << p << std::endl;
    // }
}