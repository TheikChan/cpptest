#include <iostream>
#include <iomanip>

enum CrayonColor {
    blue, red, green, yellow, black, beige
};

int main()
{
    int mynumber;
    mynumber = 10;
    std::cout << mynumber << std::endl;

    mynumber = 20;

    // multi variable declaration
    int monica, rachel, phoebe;

    monica = 10;
    rachel = 20;
    phoebe = 3254;

    int start = 10;
    int finish;

    finish = start;

    // arithmetic operation
    int start = 57;
    int time = 22;

    int total = start + 5;

    total += 2;
    total++;

    total *= 2;

    total = 21 / 4;
    total = 21 % 5;

    std::cout << start + time << total << std::endl;

    // character variable
    char ch = 'a';
    std::cout << ch << std::endl;

    // null character
    // char mychar = '\0';

    // non printable and other character e.g \n, \r, \t , '"', '\'', '\\'

    // strings
    std::string hello_string = "Hello c++";
    hello_string[0];

    std::string first_name = "hello";
    std::string last_name = "c++";

    std::string full_name = first_name + last_name;

    // boolean variable

    bool is_finished = false ;
    std::cout << is_finished << std::endl;

    // floating point
    float temperatur = 35.2;
    float proton_mass = 1.672622e-27;
    float grains_of_sand = 7.5e+18;

    // setprecision for format floating point number 
    std::cout << std::setprecision(7) << proton_mass << std::endl;

    // enumeration
    CrayonColor fill_color = black;
    std::cout << fill_color << std::endl; // will print 4 

    // reading value from console
    std::string name;
    std::cout << "Enter your name";
    std::cin >> name; // read words or number from console separated by spaces and if enter value include space it will only read first word and will read second word next time cin call 
    std::cout << "your name is" << name << std::endl;

    return 0;
}