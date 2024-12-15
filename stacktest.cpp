#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<string> cars;

    // Add elements to the stack
    cars.push("Volvo");
    cars.push("BMW");
    cars.push("Ford");
    cars.push("Mazda");

    // Access the top element
    cout << cars.top();

    // Change the value of the top element
    cars.top() = "Tesla";

    // Remove the last added element (Mazda)
    cars.pop();

    cout << cars.size();

    cout << cars.empty();

    return 0;
}