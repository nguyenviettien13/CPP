#include <iostream>
#include <string.h>

using namespace std;

class person
{
  private:
    string _ten;
    int _tuoi;

  public:
    person()
    {
        _ten = "aloha";
        _tuoi = 0;
    }
    person(string ten, int tuoi)
    {
        _ten = ten;
        _tuoi = tuoi;
    }
    void setten(string ten)
    {
        _ten = ten;
    }
    string getten()
    {
        return "ten la : " + _ten;
    }
    void settuoi(int tuoi)
    {
        _tuoi = tuoi;
    }
    int gettuoi()
    {
        return _tuoi;
    }
};

int main()
{
    person tien;
    cout << "mac dinh khi su dung constructor:" << endl;
    cout << tien.getten() << endl;
    cout << "tuoi la : " << tien.gettuoi() << endl;

    cout << "sau khi su dung constructor co tham so: " << endl;
    person tienpr("nguyen viet tien", 22);
    cout << "mac dinh khi su dung constructor:" << endl;
    cout << tienpr.getten() << endl;
    cout << "tuoi la : " << tienpr.gettuoi() << endl;
}