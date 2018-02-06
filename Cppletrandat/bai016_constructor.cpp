#include <iostream>
#include <string.h>

using namespace std;

class quocky
{
  private:
    string _ten;

  public:
    quocky()
    {
        cout << "da tao ra quocky" << endl;
        _ten = "Viet Nam";
    }
    void setten(string ten)
    {
        _ten = ten;
    }
    string getten()
    {
        return "day la la quoc ky nuoc: " + _ten;
    }
};

int main()
{
    quocky vnflag;
    cout << vnflag.getten() << endl;
    vnflag.setten("Cong hoa xa hoi chu  nghia Viet Nam");
    cout << vnflag.getten() << endl;
}