#include <iostream>

using namespace std;

class coso
{
    public:
    coso(int prvar){
        this->_prvar = prvar;
    }
    ~coso(){};
    void printdiachi(){
        cout << "dia chi cua con tro this: " << this <<endl;
    }
    int getprvar(){
        return _prvar;
    }

    private: 
    int _prvar;
};

int main()
{
    coso* pcs = new coso(20);
    cout << "Dia chi cua object: " << pcs <<endl;
    pcs->printdiachi();
    cout << pcs->getprvar()<<endl;
}