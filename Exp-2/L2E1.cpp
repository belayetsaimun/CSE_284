/*Suppose you have a Savings Account with an initial amount of 500 and you
have to add some more amount to it. Create a class ’AddMoney’ with a data
member named ’amount’ with an initial value of 500. Now make two constructors
of this class as follows:
• without any parameter - no amount will be added to the Savings Account.
• having a parameter which is the amount that will be added to the Savings
Account.
Create an object of the ’AddMoney’ class and display the final amount in the
Savings Account.*/

#include <iostream>
using namespace std;

class AddMoney
{
public:
    int initial_amount = 500;
    int add = 0;

    AddMoney()
    {
        int savingsAccount = add + initial_amount;
        cout << "No money added" << endl;
        cout << "So savings account amount is = " << savingsAccount << endl;
    }

    AddMoney(int addedMoney)
    {
        int savingsAccount = addedMoney + initial_amount;
        cout << "After adding, final amount of the savings account is = " << savingsAccount;
    }
};

int main()
{
    AddMoney();
    AddMoney add2(500);
}
