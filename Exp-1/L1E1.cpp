/*Write a class having two private variables and one member function which
will return the area and perimeter of the rectangle.*/

#include <iostream>
using namespace std;

class rectangle
{
private:
    double length;
    double width;
    double area()
    {
        return length * width;
    }
    double perimeter()
    {
        return 2 * (length + width);
    }

public:
    void initData(double len, double wid)
    {
        length = len;
        width = wid;
    }

    double calculateArea()
    {
        return area();
    }
    double calculatePerimeter()
    {
        return perimeter();
    }
};

int main()
{
    double len, wid;
    rectangle Rect;
    cout << "Enter the length: " << endl;
    cin >> len;
    cout << "Enter the width: " << endl;
    cin >> wid;
    Rect.initData(len, wid);
    cout << "Area of the rectangle: " << Rect.calculateArea() << endl;
    cout << "Perimeter of the rectangle: " << Rect.calculatePerimeter();
}
