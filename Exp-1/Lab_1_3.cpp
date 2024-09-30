/*Write a C++ program to understand public and private access of
class data members.*/

#include <iostream>

using namespace std;

class box
{
private:
public:
    int a, b, c;
    void access_private()
    {
        cin >> a >> b >> c;
        cout << a << ' ' << b << ' ' << c << endl;
    }
};

int main()
{
    box v;
    cin >> v.a >> v.b >> v.c;
    v.access_private();
}