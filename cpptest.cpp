#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>

using namespace std;

const long phone_number = 9123456789;

void print_phone_number()
{
    cout << phone_number << endl;
}

bool is_valid_name(string name)
{
    return name.length() > 0;
}

int main()
{

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
    print_phone_number();

    if (is_valid_name(name))
    {
        cout << "valid name" << endl;
    }
    else
    {
        cout << "invalid name" << endl;
    }
}
