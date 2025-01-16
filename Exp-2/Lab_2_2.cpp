#include <iostream>
using namespace std;

class Rectangle
{
private:
    double length;
    double height;

public:
    Rectangle(double len, double hgt)
    {
        length = len;
        height = hgt;
    }

    double calculateArea()
    {
        return length * height;
    }
};

int main()
{
    Rectangle rect1(10, 5);
    Rectangle rect2(20, 10);
    cout << "Area of the rectangle1: " << rect1.calculateArea() << endl;
    cout << "Area of the rectangle2: " << rect2.calculateArea();
}
