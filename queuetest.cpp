#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<string> cars;

    // Add elements to the queue
    cars.push("Volvo");
    cars.push("BMW");
    cars.push("Ford");
    cars.push("Mazda");

    // Access the front element (first and oldest)
    cout << cars.front();

    // Access the back element (last and newest)
    cout << cars.back();

    // Change the value of the front element
    cars.front() = "Tesla";

    // Change the value of the back element
    cars.back() = "VW";

    // Remove the front element (Volvo)
    cars.pop();

    cout << cars.size();

    cout << cars.empty();

    return 0;
}