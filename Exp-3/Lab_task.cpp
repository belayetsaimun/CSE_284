#include <iostream>
using namespace std;

class Student
{
private:
    int a;
    int b;
    static int studentCount;

public:
    void num(int n1, int n2)
    {
        a = n1;
        b = n2;

        cout << a << endl;
        cout << b << endl;
    }

    Student()
    {
        studentCount++;
    }

    static int getCount()
    {
        return studentCount;
    }
};

int Student::studentCount = 100;

int main()
{
    Student s1;
    s1.num(1, 2);
    cout << "Total Students: " << Student::getCount() << endl;
    Student s2;
    s2.num(3, 4);
    cout << "Total Students: " << Student::getCount() << endl;
}
