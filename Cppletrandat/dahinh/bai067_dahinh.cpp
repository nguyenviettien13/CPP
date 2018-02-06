#include <iostream>

class gamer
{
  public:
    gamer(){};
    ~gamer(){};
    virtual void skillCoBan()
    {
        std::cout << "Dam phat chet ngay! " << std::endl;
    }
};
class cungthu : public gamer
{
  public:
    cungthu(){};
    ~cungthu(){};
    void skillCoBan()
    {
        std::cout << "Cung : Bắn phat chet ngay! " << std::endl;
    }
    void bantenthan()
    {
        std::cout << "Ban ten than thanh!" << std::endl;
    }
};

class kiemthu : public gamer
{
  public:
    kiemthu(){};
    ~kiemthu(){};
    void skillCoBan()
    {
        std::cout << "KIem: Chem phat chet ngay! " << std::endl;
    }
};

int main()
{
    gamer *pt = new gamer;
    pt->skillCoBan();
    gamer *pt1 = new cungthu;
    pt1->skillCoBan();
    //pt1->bantenthan(); //Note: khong goi duoc dau nhé

    gamer *pt2 = new kiemthu;
    pt2->skillCoBan();
}