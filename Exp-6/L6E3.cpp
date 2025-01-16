/*Write a program in C++ to Check Whether a Number can be expressed as
Sum of Two Prime Numbers using the friend function.*/

#include <iostream>
#include <math.h>
using namespace std;

class Check
{
private:
    static bool isPrime(int num)
    {
        if (num <= 1)
            return false;
        for (int i = 2; i <= sqrt(num); i++)
            if (num % i == 0)
                return false;
        return true;
    }

    friend bool Express(int num);
};

bool Express(int num)
{
    for (int i = 2; i <= num / 2; i++)
        if (Check::isPrime(i) && Check::isPrime(num - i))
        {
            cout << num << " Can be expressed as the sum of two prime numbers: " << i << " and " << (num - i) << endl;
            return true;
        }
    cout << num << " Cannot be expressed as the sum of two prime numbers." << endl;
    return false;
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    Express(number);
}