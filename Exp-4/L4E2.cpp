/*Write a C++ program to calculate the percentage of a student. Accept the
marks of five subjects (Physics, Chemistry, Math, Biology, and English) in base
class. A class will derived from the base class which includes a function to find
the total marks obtained and another class derived from this first derived class
which calculates and displays the percentage of student.*/

#include <iostream>
using namespace std;

class base
{
protected:
    int p, c, m, b, e;

public:
    void getData()
    {
        cout << "Enter Physics marks: ";
        cin >> p;
        cout << endl;
        cout << "Enter Chemistry marks: ";
        cin >> c;
        cout << endl;
        cout << "Enter Math marks: ";
        cin >> m;
        cout << endl;
        cout << "Enter Biology marks: ";
        cin >> b;
        cout << endl;
        cout << "Enter English marks: ";
        cin >> e;
    }
};

class derived : public base
{
public:
    double t;
    void total()
    {
        t = p + c + m + b + e;
        cout << "Total marks obtained = " << t;
        cout << endl;
    }
};

class derived1 : public derived
{
public:
    double percentage;
    void cal()
    {
        percentage = t / 5;
    }

    void display()
    {
        cout << "Percentage of the student = " << percentage;
    }
};

int main()
{
    derived1 sub;
    sub.getData();
    sub.total();
    sub.cal();
    sub.display();
}
