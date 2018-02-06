#include <iostream>
#include <string.h>

using namespace std;

class person
{
  public:
    person(){};
    ~person(){};
    void xinchao() { cout << "xin chao cac ban! " << endl; }
    virtual void xinchaovirtual() { cout << "person: xin chao  " << endl; }
    void xinchaokhongvirtual() { cout << "person: xin chao" << endl; }

  private:
    int tuoi;
    string ten;

  protected:
    void protectedxinchao() { cout << " xin chao toi la protected!!" << endl; }
};

class contrai : public person
{
  public:
    contrai(){};
    ~contrai(){};
    void xinchaoprotected() { protectedxinchao(); }
    void xinchao() { cout << "contrai: xin chao cac ban! " << endl; }
    void xinchaovirtual() { cout << "contrai: xin chao  " << endl; }
    void xinchaokhongvirtual() { cout << "person: xin chao" << endl; }
};
int main()
{
    // contrai tien;
    // tien.xinchao();
    // tien.xinchaoprotected();
    // tien.xinchaovirtual();

    person *p;
    contrai ct;
    p = &ct;
    cout << "     co su dung virtual      " << endl;

    p->xinchaovirtual();

    cout << "   khong su dung vitual    " << endl;
    p->xinchaokhongvirtual();

    person *pointer;
    pointer->xinchao();
}