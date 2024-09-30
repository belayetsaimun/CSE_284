/*Write a C++ program to define a class BOX with member functions.
Data member: [length, breadth and height]
Member function: [input value(), print value() and volume()*/

#include <iostream>
using namespace std;
class Box
{
public:
    double len, wid, dep;

    void input()
    {
        cout << "Enter three sides of the box: ";
        cin >> len >> wid >> dep;
    }

    void print()
    {
        cout << "Length :" << len << endl;
        cout << "Width : " << wid << endl;
        cout << "Depth : " << dep << endl;
    }
    double vol()
    {
        double v = len * wid * dep;
        cout << "Volume of the box : " << v << endl;
    }
};

int main()
{
    Box mybox1;

    mybox1.input();

    mybox1.print();

    mybox1.vol();

    Box mybox2;

    mybox2.input();

    mybox2.print();

    mybox2.vol();
}