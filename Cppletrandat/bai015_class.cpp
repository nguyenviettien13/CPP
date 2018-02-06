#include <iostream>
#include <string.h>
using namespace std;

class xe
{
  private:
    string _ten;
    string _namsanxuat;
    string _mota;

  public:
    //----
    void setten(string ten)
    {
        _ten = ten;
    }
    string getten()
    {
        return "ten dong xe: " + _ten;
    }
    //----
    void setnamsanxuat(string namsanxuat)
    {
        _namsanxuat = namsanxuat;
    }
    string getnamsanxuat()
    {
        return " nam san xuat " + _namsanxuat;
    }
    //----
    void setmota(string mota)
    {
        _mota = mota;
    }
    string getmota()
    {
        return "mo ta " + _mota;
    }
};

int main()
{
    xe exciter;
    exciter.setten("exciter g470");
    exciter.setnamsanxuat("2018");
    exciter.setmota("dong co 4 ky sieu kheo");

    cout << " ten dong xe  : " << exciter.getten() << endl;
    cout << " nam san  xuat: " << exciter.getnamsanxuat() << endl;
    cout << " mo  ta   xe  : " << exciter.getmota() << endl;
}