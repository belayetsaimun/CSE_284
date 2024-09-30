/*CGPA calculator*/

#include <iostream>

using namespace std;

class Student
{
private:
    double sub1c, sub2c, sub3c;
    double sub1g, sub2g, sub3g;
    double cgpa;

public:
    void credit_input()
    {
        cout << "Enter the credits of the subjects: " << endl;
        cin >> sub1c >> sub2c >> sub3c;
    }

    void grade_input()
    {
        cout << "Enter the grades of the subjects: " << endl;
        cin >> sub1g >> sub2g >> sub3g;
    }

    double calculate_CGPA()
    {
        cgpa = (sub1c * sub1g + sub2c * sub2g + sub3c * sub3g) / (sub1c + sub2c + sub3c);
        return cgpa;
    }
};

int main()
{
    Student student1;
    student1.credit_input();
    student1.grade_input();
    cout << "CGPA of the student1 = " << student1.calculate_CGPA() << endl;
}