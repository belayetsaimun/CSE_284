/*Write a C++ program to understand public and private access of
class data members.*/

#include <iostream>

using namespace std;
class Box
{

private:
    double length;
    double breadth;
    double height;

public:
    void initData(double len, double brth, double hgt)
    {

        length = len;
        breadth = brth;
        height = hgt;
    }
    double calculateArea()
    {
        return length * breadth;
    }

    double calculateVolume()
    {
        return length * breadth * height;
    }
};

int main()
{
    Box box1;

    box1.initData(42.5, 30.8, 19.2);

    cout << "Area of Box= " << box1.calculateArea() << endl;
    cout << "Volume of Box= " << box1.calculateVolume() << endl;
}