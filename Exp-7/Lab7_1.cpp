#include <iostream>
using namespace std;

class Complex
{
private:
    float real;
    float imag;

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

    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    void output()
    {
        if (imag < 0)
            cout << "Output Complex number: " << real << "-" << imag << "i";
        else
            cout << "Output Complex number: " << real << "+" << imag << "i";
    }
};

int main()
{
    Complex c1, c2, result;

    cout << "Enter First Complex Number:\n";
    c1.input();
    cout << "Enter Second Complex number:\n";
    c2.input();

    result = c1 + c2; // c1.add(c2)
    result.output();
}