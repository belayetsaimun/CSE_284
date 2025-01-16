#include <iostream>
using namespace std;

class Class2;

class Class1
{
private:
    int num1;

public:
    Class1()
    {
        num1 = 20;
    }

    friend int add(Class1, Class2);
};

class Class2
{
private:
    int num2;

public:
    Class2()
    {
        num2 = 5;
    }

    friend int add(Class1, Class2);
};

int add(Class1 o1, Class2 o2)
{
    return (o1.num1 + o2.num2);
}

int main()
{
    Class1 o1;
    Class2 o2;
    cout << "Sum = " << add(o1, o2);
}
