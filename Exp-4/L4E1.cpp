/*Write a C++ program to add two numbers. Accept these two numbers from
the user in base class and display the sum of these two numbers in derived class.*/

#include <iostream>
using namespace std;

class Base
{
public:
    int x;
    int y;

    void getData()
    {
        cout << "Enter the value of x = ";
        cin >> x;
        cout << "Enter the value of y = ";
        cin >> y;
    }
};

class derived : public Base
{
public:
    int sum;
    void displaySum()
    {
        sum = x + y;
        cout << "Sum of x and y = " << sum;
    }
};

int main()
{
    derived sum;
    sum.getData();
    sum.displaySum();
}
