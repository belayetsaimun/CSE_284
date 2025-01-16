#include <iostream>
#include <cstring>
using namespace std;

class Cube
{
    int side;

public:
    ~Cube()
    {
        cout << "Destructor called";
    }
};

int main()
{
    Cube myCube;
}
