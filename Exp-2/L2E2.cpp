/*Write a C++ Program to define a class Car with the following specifications:
Private members:
car name, model name, fuel type: string type
mileage: float type
price: double type
Public members:
displaydata(): Function to display the data members on the screen.
Use Constructor (both Default and parameterized) and destructor. When no
parameter is passed the default constructor will be called with the message ”Default
constructor has been called”.*/

#include <iostream>
#include <cstring>
using namespace std;

class Car
{
private:
    string car_name;
    string model_name;
    string fuel_type;
    float mileage;
    double price;

public:
    void displayData()
    {
        cout << car_name << endl;
        cout << model_name << endl;
        cout << fuel_type << endl;
        cout << mileage << endl;
        cout << price << endl;
    }

    Car()
    {
        cout << "Default constructor has been called." << endl;
    }

    Car(string car, string model, string fuel, float mile, double prc)
    {
        car_name = car;
        model_name = model;
        fuel_type = fuel;
        mileage = mile;
        price = prc;
    }
    ~Car()
    {
    }
};

int main()
{
    Car();
    Car car1("Range Rover", "Vogue", "Octane", 40, 500000);
    car1.displayData();
}
