#include <iostream>
#include <string>
using namespace std;

class Car
{
public: // access specifier e.g private (default), public, protected
    string brand;
    string model;
    int year;
    Car(string brand, string model, int year); // Constructor declaration
    // Car(string brand, string model, int year)
    // { // Constructor with parameters
    //     brand = brand;
    //     model = model;
    //     year = year;
    // }

    // Default empty constructor will call when instantiate object e.g Car myCar;
public:
    Car()
    {
        brand = "";
        model = "";
        year = 0;
    }

    // Parameterized constructor
    // Car(string brand, string model, int year) : brand(brand), model(model), year(year) {}

public:
    int speed(int maxSpeed); // method/function declaration with parameter

public:           // Access specifier
    void repair() // method/function definition inside class
    {             // Method/function defined inside the class
        cout << "Repair car";
    }
};

// Constructor definition outside the class
Car::Car(string brand, string model, int year)
{
    brand = brand;
    model = model;
    year = year;
}

// method/function definition outside class with parameter
int Car::speed(int maxSpeed)
{
    return maxSpeed;
}