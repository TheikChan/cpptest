#include <iostream>
#include <map>

using namespace std;

int main()
{

    map<string, int> people = {{"John", 32}, {"Adele", 45}, {"Bo", 29}};

    // Get the value associated with the key "John"
    cout << "John is: " << people["John"] << "\n";

    // Get the value associated with the key "Adele"
    cout << "Adele is: " << people["Adele"] << "\n";

    // Get the value associated with the key "Adele"
    cout << "Adele is: " << people.at("Adele") << "\n"; // .at() will throw error message if key not exist

    // Get the value associated with the key "Bo"
    cout << "Bo is: " << people.at("Bo") << "\n";

    // Change John's value to 50 instead of 32
    people["John"] = 50;

    // Change John's value to 50 instead of 32
    people.at("John") = 50;

    // Add new elements
    people["Jenny"] = 22;
    people["Liam"] = 24;
    people["Kasper"] = 20;
    people["Anja"] = 30;

    people.insert({"Jenny", 22});
    people.insert({"Liam", 24});
    people.insert({"Kasper", 20});
    people.insert({"Anja", 30});

    // Trying to add two elements with equal keys will only insert first element because key is not unique
    people.insert({"Jenny", 22});
    people.insert({"Jenny", 30});

    // Remove an element by key
    people.erase("John");

    // Remove all elements
    people.clear();

    cout << people.size(); // size of map elements

    cout << people.count("John"); // check the key exist in map elements

    for (auto person : people)
    {
        cout << person.first << " is: " << person.second << "\n";
    }

    // reverse map e.g Bo, Adele, John because using greater<string>
    map<string, int, greater<string>> people = {{"John", 32}, {"Adele", 45}, {"Bo", 29}};

    for (auto person : people)
    {
        cout << person.first << " is: " << person.second << "\n";
    }
    return 0;
}