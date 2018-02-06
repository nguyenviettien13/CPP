#include <iostream>
#include <vector>

using namespace std;

int main()
{
    std::vector<int> dayso;
    cout << dayso.size() << endl;
    dayso.push_back(1);
    cout << dayso.size() << "    " << dayso.capacity() << endl;
    dayso.push_back(2);
    cout << dayso.size() << "    " << dayso.capacity() << endl;
    dayso.push_back(3);
    dayso.push_back(1);
    cout << dayso.size() << "    " << dayso.capacity() << endl;
    dayso.push_back(2);
    cout << dayso.size() << "    " << dayso.capacity() << endl;
    dayso.push_back(3);
    dayso.push_back(1);
    cout << dayso.size() << "    " << dayso.capacity() << endl;
    dayso.push_back(2);
    cout << dayso.size() << "    " << dayso.capacity() << endl;
    dayso.push_back(3);
    dayso.push_back(1);
    cout << dayso.size() << "    " << dayso.capacity() << endl;
    dayso.push_back(2);
    cout << dayso.size() << "    " << dayso.capacity() << endl;
    dayso.push_back(3);

    cout << "bat dau qua trinh resize" << endl;

    //resize
    dayso.resize(10);

    for (std::vector<int>::iterator it = dayso.begin(); it != dayso.end(); it++)
    {
        cout << *it << endl;
    }

    dayso.reserve(30);
    cout << "size: " << dayso.size() << " capacity : " << dayso.capacity() << endl;

    dayso.push_back(1);
    cout << dayso.size() << "    " << dayso.capacity() << endl;
    dayso.push_back(2);
    cout << dayso.size() << "    " << dayso.capacity() << endl;
    dayso.push_back(3);
    dayso.push_back(1);
    cout << dayso.size() << "    " << dayso.capacity() << endl;
    dayso.push_back(2);
    cout << dayso.size() << "    " << dayso.capacity() << endl;
    dayso.push_back(3);
    dayso.push_back(1);
    cout << dayso.size() << "    " << dayso.capacity() << endl;
    dayso.push_back(2);
    cout << dayso.size() << "    " << dayso.capacity() << endl;
    dayso.push_back(3);
    dayso.push_back(1);
    cout << dayso.size() << "    " << dayso.capacity() << endl;
    dayso.push_back(2);
    cout << dayso.size() << "    " << dayso.capacity() << endl;
    dayso.push_back(3);
    dayso.push_back(1);
    cout << dayso.size() << "    " << dayso.capacity() << endl;
    dayso.push_back(2);
    cout << dayso.size() << "    " << dayso.capacity() << endl;
    dayso.push_back(3);
    dayso.push_back(1);
    cout << dayso.size() << "    " << dayso.capacity() << endl;
    dayso.push_back(2);
    cout << dayso.size() << "    " << dayso.capacity() << endl;
    dayso.push_back(3);
    dayso.push_back(1);
    cout << dayso.size() << "    " << dayso.capacity() << endl;
    dayso.push_back(2);
    cout << dayso.size() << "    " << dayso.capacity() << endl;
    dayso.push_back(3);
    dayso.push_back(1);
    cout << dayso.size() << "    " << dayso.capacity() << endl;
    dayso.push_back(2);
    cout << dayso.size() << "    " << dayso.capacity() << endl;
    dayso.push_back(3);
    dayso.push_back(1);
    cout << dayso.size() << "    " << dayso.capacity() << endl;
    dayso.push_back(2);
    cout << dayso.size() << "    " << dayso.capacity() << endl;
    dayso.push_back(3);
    dayso.push_back(1);
    cout << dayso.size() << "    " << dayso.capacity() << endl;
    dayso.push_back(2);
    cout << dayso.size() << "    " << dayso.capacity() << endl;
    dayso.push_back(3);
    dayso.push_back(1);
    cout << dayso.size() << "    " << dayso.capacity() << endl;
    dayso.push_back(2);
    cout << dayso.size() << "    " << dayso.capacity() << endl;
    dayso.push_back(3);
    dayso.push_back(1);
    cout << dayso.size() << "    " << dayso.capacity() << endl;
    dayso.push_back(2);
    cout << dayso.size() << "    " << dayso.capacity() << endl;
    dayso.push_back(3);
    dayso.push_back(1);
    cout << dayso.size() << "    " << dayso.capacity() << endl;
    dayso.push_back(2);
    cout << dayso.size() << "    " << dayso.capacity() << endl;
    dayso.push_back(3);
    dayso.push_back(1);
    cout << dayso.size() << "    " << dayso.capacity() << endl;
    dayso.push_back(2);
    cout << dayso.size() << "    " << dayso.capacity() << endl;
    dayso.push_back(3);
    dayso.push_back(1);
    cout << dayso.size() << "    " << dayso.capacity() << endl;
    dayso.push_back(2);
    cout << dayso.size() << "    " << dayso.capacity() << endl;
    dayso.push_back(3);
    dayso.push_back(1);
    cout << dayso.size() << "    " << dayso.capacity() << endl;
    dayso.push_back(2);
    cout << dayso.size() << "    " << dayso.capacity() << endl;
    dayso.push_back(3);
    cout << "size: " << dayso.size() << " capacity : " << dayso.capacity() << endl;
}
