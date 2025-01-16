#include <iostream>
using namespace std;

class Student
{
private:
    int a, b, c;

public:
    Student(int num1, int num2, int num3)
    {
        a = num1;
        b = num2;
        c = num3;
        cout << "Student 1: " << num1 << endl
             << num2 << endl
             << num3 << endl;
    }
    Student()
    {
        a = 4;
        b = 5;
        c = 6;
        cout << " Student 2: " << endl;
        cout << a << endl
             << b << endl
             << c;
    }
};

int main()
{
    Student student1(1, 2, 3);
    Student student2;
}
