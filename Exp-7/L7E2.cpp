/*Write a C++ program to Overloaded − operator to subtract two complex
number.*/

#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    Complex()
    {
        real = 0;
        imag = 0;
    }

    void input()
    {
        cout << "Enter real and imaginary parts respectively: ";
        cin >> real;
        cin >> imag;
    }

    Complex operator-(Complex c)
    {
        Complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }

    void output()
    {
        if (imag < 0)
            cout << "Subtraction of the two Complex Number: " << real << "+" << imag << "i";
        else
            cout << "Subtraction of the two Complex Number : " << real << " - " << imag << "i";
    }
};

int main()
{
    Complex c1, c2, result;

    cout << "Enter First Complex Number:\n";
    c1.input();
    cout << "Enter Second Complex number:\n";
    c2.input();

    result = c1 - c2;
    result.output();
}
