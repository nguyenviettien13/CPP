#include <iostream>
using namespace std;

class suphu
{
  public:
    suphu(){};
    ~suphu(){};
    virtual void skill1()
    {
        std::cout << "ban phat chet ngay!!" << std::endl;
    }
    virtual void skill2()
    {
        std::cout << "suphu: chua hoc" << std::endl;
    }
    virtual void skill3()
    {
        std::cout << "suphu: skill 3" << std::endl;
    }
};

class cungthu : public suphu
{
  public:
    cungthu(){};
    ~cungthu(){};
    void skill1()
    {
        std::cout << "Cung: ban phat chet ngay!!" << std::endl;
    }
    void skill2()
    {
        std::cout << "cung : chua hoc" << std::endl;
    }
    void skill3()
    {
        std::cout << "Cung: Skill 3 ultimate!" << std::endl;
    }
};

class gaythu : public suphu
{
  public:
    gaythu(){};
    ~gaythu(){};
    void skill1()
    {
        std::cout << "gay thu: ban phat chet ngay!!" << std::endl;
    }
    void skill2()
    {
        std::cout << "gay : chua hoc" << std::endl;
    }
};

int main()
{
    suphu *pt;
    bool iscungthu = false;

    pt = new cungthu;
    pt->skill3();

    if (iscungthu)
    {
        pt = new cungthu;
        pt->skill1();
    }
    else
    {
        pt = new gaythu;
        pt->skill1();
    }
    pt->skill2();
}