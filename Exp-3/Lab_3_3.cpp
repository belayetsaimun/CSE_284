#include <iostream>
using namespace std;

class Square
{
private:
    int side;
    static int objectCount;

public:
    Square()
    {
        objectCount++;
    }

    static int getCount()
    {
        return objectCount;
    }
};

int Square::objectCount = 0;

int main()
{
    Square s1;
    cout << "Total Objects: " << Square::getCount() << endl;
    Square s2;
    cout << "Total Objects: " << Square::getCount() << endl;
}