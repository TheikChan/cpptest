#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <iterator>
#include <algorithm>

#include "myshapes.h"

// import custom name space
using namespace myshapes;

class Fraction
{
public:
    Fraction(int n, int d)
        : numerator(n), denominator(d) {}

    int numerator, denominator;
};

// * operator overloading function for acception Fraction object
Fraction operator*(Fraction &f1, Fraction &f2)
{
    int n = f1.numerator * f2.numerator;
    int d = f1.denominator * f2.denominator;
    return Fraction(n, d);
}

// << operator overloading function for outputing fraction object properties
std::ostream &operator<<(std::ostream &outs, const Fraction &f)
{
    float decimal = ((float)f.numerator) / ((float)f.denominator);
    outs << f.numerator << "/" << f.denominator << " = " << decimal;

    return outs;
}

class Item
{
public:
    Item(int newId): id(newId) { }
    int id;
};

int main()
{

    // File I/O
    int id;
    std::string last, first;

    // ifstream - input file stream
    std::ifstream students_ins;

    // open to read from text file
    students_ins.open("students.txt");

    students_ins >> id >> last >> first;

    students_ins.close();

    // create output file stream
    std::ofstream prices_outs;

    // open to write into text file
    prices_outs.open("prices.txt");

    prices_outs << "ceral_name" << "cereal_price" << std::endl;
    prices_outs.close();

    // exception handling
    std::string fileName = "nonexistent.txt";
    std::ifstream nonFileStream;

    try
    {
        nonFileStream.open(fileName);
        if (!nonFileStream.is_open())
        {
            throw "Failed to open" + fileName;
        }

        std::cout << "Successfully opened " + fileName << std::endl;
        nonFileStream.close()
    }
    catch (std::string message)
    {
        std::cout << "FILE ERROR:" << message << std::endl;
    }

    Fraction twoThirds(2, 3);
    Fraction threeFourths(3, 4);

    // calling << operator overloading function on Fraction object
    std::cout << " two thirds is " << twoThirds << std::endl;
    std::cout << " three fourth is" << threeFourths << std::endl;

    // calling * operator overloading function on Fraction object
    std::cout << "their product is " << twoThirds * threeFourths << std::endl;

    // Standard Template Library (STL) Vectors
    std::vector<int> values{10, 20, 30};

    // append a value at the end
    values.push_back(40);

    // insert 2 at the beginning
    values.insert(values.begin(), 2);

    // STL Maps
    std::map<std::string, int> mapNumbers;

    // add value with key-value paris
    mapNumbers["one"] = 1;
    mapNumbers["twenty-one"] = 21;

    // update value
    mapNumbers["twenty-one"]++;

    // STL Iterator
    std::vector<int>::iterator itr;

    for (itr = values.begin(); itr != values.end(); itr++)
    {
        std::cout << std::setw(3) << *itr;
    }

    std::cout << std::endl;

    for (int n : values)
    {
        std::cout << std::setw(3) << n;
    }

    std::cout << std::endl;

    // Algorightms Library e.g sorting, searching
    std::vector<std::string> weeks{"Sunday", "Monday", "Tuesday", "Wednesday", "Thrusday", "Friday", "Saturday"};

    std::reverse(weeks.begin(), weeks.end());

    std::sort(weeks.begin(), weeks.end());

    // Smart pointers - unique pointers , shared pointers

    // unique pointer = unique_ptr
    // have exclusive ownership of object it point to and no other smart pointer can also point to that object
    // but ownership can transfer to other unique pointer by using move
    // after transfer original pointer is automatically set to nullptr and
    // object point to unique pointer is automatically deleted when unique pointer goes out of scope e.g return from functions where unique pointer is declared
    std::unique_ptr<Item> uniquePtr1(new Item(10));
    std::unique_ptr<Item> uniquePtr2(nullptr);

    // transfer ownership using move method
    uniquePtr2 = std::move(uniquePtr1);
    uniquePtr2.reset(new Item(5));

    std::cout << uniquePtr2->id << std::endl;

    // shared pointer = shared_ptr
    // object in heap pointed by multiple shared pointer and shared ownership of object 
    // object automatically deleted when last shared pointers no longer point to object and object is deleted only once
    std::shared_ptr<Item> sharPtr1(new Item(100));
    std::shared_ptr<Item> sharPtr2(sharPtr1);
}