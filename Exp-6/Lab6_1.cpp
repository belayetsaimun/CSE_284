#include <iostream>
using namespace std;

class Distance
{
private:
    int meter;
    int value;

    friend int addValue(Distance);

public:
    Distance()
    {
        meter = 0;
    }
};

int addValue(Distance d)
{
    cout << "Enter the value you want to add: ";
    cin >> d.value;
    return d.meter + d.value;
}

int main()
{
    Distance D;
    cout << "Distance: " << addValue(D);
}