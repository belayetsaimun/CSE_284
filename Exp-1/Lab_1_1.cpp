#include <iostream>
using namespace std;
int main()
{
    class box
    {
    public:
        int len;
        int width;
        int dep;
        double vol;
    };
    box box1;
    box box2;

    box1.len = 10;
    box1.width = 10;
    box1.dep = 10;
    box1.vol = box1.len * box1.width * box1.dep;
    cout << box1.vol << endl;

    box2.len = 20;
    box2.width = 20;
    box2.dep = 20;
    box2.vol = box2.len * box2.width * box2.dep;
    cout << box2.vol;
}