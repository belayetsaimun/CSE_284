/*Define a class Distance with distances in feet and inch and with a print
function to print the distance.
a) overload < operator to compare two distances using member function.
b) overload + operator to add two Distances using friend function.*/

#include <iostream>
using namespace std;

class Distance
{
private:
    int feet;
    int inch;

public:
    Distance()
    {
        feet = 0;
        inch = 0;
    }

    void getData()
    {
        cout << "Enter Distance in feet: ";
        cin >> feet;
        cout << "Enter Distance in inch: ";
        cin >> inch;
    }

    bool operator<(Distance d)
    {
        if (feet < d.feet)
        {
            return true;
        }
        if (feet == d.feet && inch < d.inch)
        {
            return true;
        }

        return false;
    }

    void print()
    {
        cout << "Summation of this two distance is: " << feet << " Feet " << inch << " Inch" << endl;
    }
    friend Distance operator+(Distance, Distance);
};

Distance operator+(Distance d1, Distance d2)
{
    Distance temp;
    temp.feet = d1.feet + d2.feet;
    temp.inch = d1.inch + d2.inch;
    return temp;
}

int main()
{
    Distance d1, d2, result;

    cout << "First Distance:" << endl;
    d1.getData();
    cout << "Second Distance:" << endl;
    d2.getData();

    if (d1 < d2)
    {
        cout << "First Distance is less than Second Distance" << endl;
    }
    else
    {
        cout << "First Distance is greater than Second Distance" << endl;
    }

    result = d1 + d2;
    result.print();
}
