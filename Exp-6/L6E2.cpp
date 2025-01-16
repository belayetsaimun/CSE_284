/*Write a C++ program to find the number and sum of all integer between 100
and 200 which are divisible by 11 with friend function.*/

#include <iostream>
using namespace std;

class Number
{
private:
    int i;
    friend void Div(Number);
};

void Div(Number n)
{
    int sum = 0;
    int count = 0;
    for (n.i = 100; n.i <= 200; n.i++)
    {
        if (n.i % 11 == 0)
        {
            count++;
            sum = sum + n.i;
        }
    }

    cout << "Total numbers divisible by 11 from 100 to 200 are: " << count << endl;
    cout << "Sum of those numbers is: " << sum;
}

int main()
{
    Number n;
    Div(n);
}