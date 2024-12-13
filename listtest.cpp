#include <iostream>
#include <list>

using namespace std;

int main()
{

    list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    for (string car : cars)
    {
        cout << car << "\n";
    }

    // Get the first element
    cout << cars.front();

    // Get the last element
    cout << cars.back();

    // Change the value of the first element
    cars.front() = "Opel";

    // Change the value of the last element
    cars.back() = "Toyota";

    cout << cars.front();
    cout << cars.back();

    // Add an element at the beginning
    cars.push_front("Tesla");

    // Add an element at the end
    cars.push_back("VW");

    // Remove the first element
    cars.pop_front();

    // Remove the last element
    cars.pop_back();

    cout << cars.size();

    cout << cars.empty();

    return 0;
}