#include <iostream>
using namespace std;

// Base class
class Shape
{
protected:
    int width;
    int height;

public:
    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }
};

// Derived class
class Rectangle : public Shape
{
public:
    int getArea()
    {
        return (width * height);
    }
};

int main()
{
    Rectangle rect;
    rect.setWidth(10);
    rect.setHeight(12);
    cout << "Total Area: " << rect.getArea() << endl;
}
