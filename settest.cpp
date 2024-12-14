#include <iostream>
#include <set>

using namespace std;

int main()
{

    // default sort by ascending order
    set<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    for (string car : cars)
    {
        cout << car << "\n";
    }

    // Sort elements in a set in descending order
    set<int, greater<int>> numbers = {1, 7, 3, 2, 5, 9};

    // Print the elements
    for (int num : numbers)
    {
        cout << num << "\n";
    }

    cars.insert("Tesla");
    cars.insert("VW");
    cars.insert("Toyota");
    cars.insert("Audi");

    // Remove elements
    cars.erase("Volvo");
    cars.erase("Mazda");

    // Remove all elements
    cars.clear();

    cout << cars.size();

    cout << cars.empty();

    return 0;
}