#include <iostream>

using namespace std;

// Base class (parent)
class Machine
{
public:
    void showType()
    {
        cout << "machine class.";
    }
};

// Derived class (child)
class Car
{
public:
    void showModel()
    {
        cout << "car model" << endl;
    }
};

// multiple inheritance
class Toyata : public Car, public Machine
{
};

int main()
{
    Toyata toyataCar;
    toyataCar.showType();
    toyataCar.showModel();

    return 0;
}