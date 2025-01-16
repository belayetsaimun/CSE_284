/*Write a C++ Program to display the reverse of a number using the Friend
function.*/

#include <iostream>
using namespace std;

class Number
{
public:
    int num;
    friend void reverse(Number);
    Number()
    {
        cout << "Enter a Number: ";
        cin >> num;
    }
};
void reverse(Number rev)
{
    int r;
    int sum = 0;
    cout << "Reverse of " << rev.num << " is ";

    while (rev.num != 0)
    {
        r = rev.num % 10;
        sum = sum * 10 + r;
        rev.num = rev.num / 10;
    }
    cout << sum;
}

int main()
{
    Number rev;
    reverse(rev);
}
