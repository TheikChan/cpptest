#include <iostream>
#include <deque>

using namespace std;

// double ended queue elements can add and remove on both front and back
int main()
{

    deque<string> cars;
    // Add elements to the queue
    cars.push_back("Volvo");
    cars.push_back("BMW");
    cars.push_back("Ford");
    cars.push_back("Mazda");
    cars.push_back("Tesla");

    // Print deque elements
    for (string car : cars)
    {
        cout << car << "\n";
    }

    // Get the first element
    cout << cars.front();

    // Get the last element
    cout << cars.back();

    // Get the element by position
    cout << cars.at(1);
    cout << cars.at(2);

    // update element
    cars[0] = "Opel";
    cars.at(1) = "Ford";

    // Remove the first element
    cars.pop_front();

    // Remove the last element
    cars.pop_back();

    cout << cars.size();

    cout << cars.empty();

    return 0;
}