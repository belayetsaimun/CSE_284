/*Write a C++ Program to calculate the area of different geometric shapes
such as Circle, Triangle, and Rectangle. Use function overloading.
Class Name: Shape
*/

#include <iostream>
using namespace std;

void area(double radius)
{
    double c = 3.1416 * radius * radius;
    cout << "Area of the circle: " << c << endl;
}

void area(double base, double height)
{
    double t = 0.5 * base * height;
    cout << "Area of the Triangle: " << t << endl;
}

void area(int width, int length)
{
    int r = width * length;
    cout << "Area of the Rectangle: " << r << endl;
}

int main()
{
    double r = 4;
    double b = 5;
    double h = 3;
    int w = 5;
    int l = 3;
    area(r);
    area(b, h);
    area(w, l);
}