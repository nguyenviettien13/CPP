#include <iostream>
#include <string.h>

using namespace std;

class xe
{
  private:
    int _bankinhloptruoc;
    int _bankinhlopsau;

  public:
    void retrai()
    {
        cout << "Re trai" << endl;
    }
    void rephai()
    {
        cout << "Re phai" << endl;
    }
    void setbankinhloptruoc(int bankinhloptruoc)
    {
        _bankinhloptruoc = bankinhloptruoc;
    }
    int getbankinhloptruoc()
    {
        return _bankinhloptruoc;
    }
    void setbankinhlopsau(int bankinhlopsau)
    {
        _bankinhlopsau = bankinhlopsau;
    }
    int getbankinhlopsau()
    {
        return _bankinhlopsau;
    }
};
int main()
{
    xe bmv;
    bmv.setbankinhloptruoc(10);
    bmv.setbankinhlopsau(12);
    cout << "Ban kinh lop truoc la : " << bmv.getbankinhloptruoc() << endl;
    cout << "Ban kinh lop  sau  la : " << bmv.getbankinhlopsau() << endl;
    bmv.retrai();
    bmv.rephai();
}