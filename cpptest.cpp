#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <cmath>

using namespace std;

const long phone_number = 9123456789;

void printPhoneNumber()
{
    cout << phone_number << endl;
}

bool isValidName(string name)
{
    return name.length() > 0;
}

int main()
{

    // 8 bits = 1 bytes

    int myNum = 5;            // Integer (whole number without decimals) 2 or 4 bytes
    double myFloatNum = 5.99; // Floating point number (with decimals) 8 bytes
    float totalNum = 3.2;     // Floating point number (with decimals) 4 bytes
    char myLetter = 'D';      // Character 1 bytes
    string myText = "Hello";  // String (text)  depend on the characters size
    bool myBoolean = true;    // Boolean (true or false) 1 bytes

    // Multi variable
    int x = 5, y = 6, z = 50;
    cout << x + y + z;

    // constant
    const int myNum = 15; // myNum will always be 15
    // myNum = 16; // error: assignment of read-only variable 'myNum'
    const int minutesPerHour = 60;
    const float PI = 3.14;

    // Create integer variables
    int length = 4;
    int width = 6;
    int area;

    // Calculate the area of a rectangle
    area = length * width;

    // Print the variables
    cout << "Length is: " << length << "\n";
    cout << "Width is: " << width << "\n";
    cout << "Area of the rectangle is: " << area << "\n";

    // Command Line User Input
    // int x;
    // cout << "Type a number: ";       // Type a number and press enter
    // cin >> x;                        // Get user input from the keyboard
    // cout << "Your number is: " << x; // Display the input value

    string firstName = "Theik";
    string lastName = "\"Chan\"";
    // string fullName = firstName + " " + lastName; // // string concatenation
    string fullName = firstName.append(lastName); // string concatenation
    cout << fullName;

    // Access String
    fullName.at(0); // access with position
    fullName.at(1); // access with position

    cout << fullName[fullName.length() - 1] << endl; // print last character in full name string variable

    // Math operation
    cout << max(10, 5);
    cout << min(10, 5);

    cout << sqrt(8);
    cout << round(2.79);
    cout << log(2);

    // boolean operation
    int myAge = 25;
    int votingAge = 18;

    cout << (myAge >= votingAge); // returns 1 (true), meaning 25 year olds are allowed to vote!
    if (myAge >= votingAge)
    {
        cout << "Old enough to vote!";
    }
    else
    {
        cout << "Not old enough to vote.";
    }

    // msg array
    vector<string> msg{"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    // insert new item
    msg.push_back("theik");

    // insert new item at the beginning
    msg.insert(
        msg.begin(),
        "chan");

    // delete last 2 items
    msg.erase(
        msg.begin(),
        msg.begin() + 2);

    // search item in array
    find(
        msg.begin(),
        msg.end(),
        "theik") != msg.end();

    // loop print msg array
    for (const auto &word : msg)
    {
        cout << word << " ";
    }
    cout << endl;

    // set
    set<string> devices = {string("iphone"), "ipad"};

    // insert new item into set
    devices.insert("ipod");

    // remove item from set
    devices.erase("ipod");

    // search item in set
    devices.find("ipod") != devices.end();

    // loop print set
    for (const auto &device : devices)
    {
        cout << device << " ";
    }
    cout << endl;

    // dictionary
    map<string, int> devices_list = {
        {"iphone", 1},
        {"ipad", 2},
        {"ipod", 3}};

    // get item from dictionary
    devices_list["iphone"];

    // update item into dictionary
    devices_list["iphone"] = 5;

    // delete item from dictionary
    devices_list.erase("iphone");

    // loop print dictionary
    for (const auto &device : devices_list)
    {
        cout << device.first << " " << device.second << endl;
    }
    cout << endl;

    // boolean
    bool is_allow = true;
    if (is_allow)
    {
    }
    else
    {
    }

    // loop
    while (is_allow)
    {
        is_allow = false;
    }

    // option condition if let
    // optional<string> name{"theik chan"};
    // if (auto result = name)
    // {
    // }

    string name = "theik chan";
    // function
    printPhoneNumber();

    if (isValidName(name))
    {
        cout << "valid name" << endl;
    }
    else
    {
        cout << "invalid name" << endl;
    }
}
