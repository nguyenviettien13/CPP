#include <iostream>
using namespace std;

class phongtom
{
  public:
    virtual void skill_1() = 0; //pure virtual
    virtual void skill_2() { cout << "Phong tom: song phi 2 cu ! " << std::endl; }
};

class cungthu : public phongtom
{
  public:
    void skill_1()
    {
        cout << "Cung: Dam phat chet ngay!" << endl;
    }
};

class gaythu : public phongtom
{
  public:
    void skill_2()
    {
        std::cout << "gay thu: dap phat chet ngay!!" << std::endl;
    }
};

int main()
{
    phongtom pt;
    pt.skill_1();
    pt.skill_2();
}