#include <iostream>
using namespace std;

class base
{
public:
    int x;
    void getData()
    {
        cout << "Enter value of x = ";
        cin >> x;
    }
};

class derive1 : public base
{
public:
    int y;
    void readData()
    {
        cout << "Enter value of y = ";
        cin >> y;
    }
};

class derive2 : public derive1
{
private:
    int z;

public:
    void inData()
    {
        cout << "Enter value of Z = ";
        cin >> z;
    }
    void product()
    {
        cout << "\nProduct = " << x * y * z;
    }
};

int main()
{
    derive2 a;
    a.getData();
    a.readData();
    a.inData();
    a.product();
}
