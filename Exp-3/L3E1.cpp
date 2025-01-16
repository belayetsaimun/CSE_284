/*Write a C++ program to define a class Batsman with the following specifications,
batsman ID: 6 digits roll number
static member count: To keep track on number of object
static function getcount(): return the value of count
function getname(): To take batsman name as input
function showname(): To show batsman name
Access all the data members and member functions using the objects of class
Batsman.
*/

#include <iostream>
#include <string>
using namespace std;

class Batsman
{
private:
    int batsman_id;
    string batsman_name;
    static int memberCount;

public:
    Batsman()
    {
        memberCount++;
    }

    void getname()
    {
        cout << "Enter Batsman Name : ";
        cin >> batsman_name;
    }

    void showname()
    {
        cout << "Batsman Name: " << batsman_name << endl;
    }

    static int getCount()
    {
        return memberCount;
    }
};

int Batsman::memberCount = 0;

int main()
{
    int a;
    cout << "Initially number of objects: " << Batsman::getCount() << endl;
    cout << "Enter number of entry: ";
    cin >> a;
    Batsman batsman1;
    Batsman batsman2;
    batsman1.getname();
    batsman2.getname();
    cout << "Finally number of objects: " << Batsman::getCount() << endl;
    batsman1.showname();
    batsman2.showname();
}