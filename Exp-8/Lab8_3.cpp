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

        Base::print();
    }
};

int main()
{
    derived o1;
    o1.print();
}