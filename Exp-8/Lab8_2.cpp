#include <iostream>
using namespace std;

class Base
{
public:
    void print()
    {
        cout << "Base Function" << endl;
    }
};

class derived : public Base
{
public:
    void print()
    {
        cout << "Derived Function" << endl;
    }
};

int main()
{
    derived o1, o2;
    o1.print();
    o2.Base::print();
}