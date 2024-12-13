#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // print vector array elements
    for (string car : cars)
    {
        cout << car << "\n";
    }

    // access vector element by index
    cout << cars[0];
    cout << cars.at(0);

    // access first and last element by function
    cout << cars.front();
    cout << cars.back();

    // update value
    cars[0] = "Telsa";
    cars.at(1) = "Honda";

    // append new value at the end of vector
    cars.push_back("Toyata");

    // delete last element of vector
    cars.pop_back();

    // get size of vector
    cout << cars.size();

    // check vector is empty
    cout << cars.empty();

    return 0
}
