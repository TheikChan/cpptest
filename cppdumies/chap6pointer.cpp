#include <iostream>
#include <sstream>
#include <stdlib.h>

void changesAreGood(int myParam)
{
    myParam += 10;
    std::cout << "inside function:" << std::endl;
    std::cout << myParam << std::endl;
}

void changesAreGood2(int *myParam)
{
    (*myParam) += 10; // update the value of address pointer pointed to
    std::cout << "inside function:" << std::endl;
    std::cout << *myParam << std::endl;
}

// return pointer from function and don't return address of function local variable
std::string *getSecretCode() 
{
    std::string *code = new std::string;
    code -> append("CR"); // call string append function using arrow operator and append value into code variable

    int randonNumber = rand();
    std::ostringstream converter;
    converter << randonNumber;
    code -> append(converter.str());

    code -> append("NQ");

    return code;
}

int main()
{
    int numberOfPotholes = 533587;
    numberOfPotholes = 7008;
    std::cout << &numberOfPotholes << std::endl;

    int *ptr;
    ptr = &numberOfPotholes;

    // change variable value using pointer
    *ptr = 6008; // dereferencing pointer to access and change variable value
    std::cout << numberOfPotholes << std::endl;

    std::cout << *ptr << std::endl; // read value through pointer and print it

    std::string goodMovie;
    std::string *ptrToString;

    goodMovie = "Best in show";
    ptrToString = &goodMovie;

    std::cout << *ptrToString << std::endl;

    *ptrToString = "galaxy quest";
    std::cout << goodMovie << std::endl;

    for (unsigned i = 0; i < goodMovie.length(); i++)
    {
        if (i == 2)
        {
            // update array value using pointer when index is 2
            (*ptrToString)[i] = 'T';
        }

        // access character of string using pointers
        std::cout << (*ptrToString)[i] << " ";
    }

    std::cout << std::endl;

    // access array length using pointer
    for ( unsigned i = 0; i < (*ptrToString).length(); i++ )
    {
        std::cout << (*ptrToString)[i] << std::endl;
    }

    // change pointer variable for the same data type
    int expensiveComputer;
    int cheapComputer;
    int *ptrToComputer;

    ptrToComputer = &expensiveComputer;
    *ptrToComputer = 2000;
    std::cout << *ptrToComputer << std::endl;

    ptrToComputer = &cheapComputer;
    *ptrToComputer = 500;
    std::cout << *ptrToComputer << std::endl;

    ptrToComputer = &expensiveComputer;
    std::cout << *ptrToComputer << std::endl;

    // multiple pointer declaration
    int *ptr1, *ptr2;
    int *ptrOne, ptrTwo; // ptrTwo is normal integer variable

    // using new pointer
    int *someValue = new int; // declare heap pointer for dynamic memory management allocated and deallocated.
    *someValue = 10;

    std::cout << *someValue << std::endl; // print value
    std::cout << someValue << std::endl; // print memory address it will change each time program executation because dynamic memory allocation

    int *newValue = new int(10); // new pointer with initializer value

    //freeing pointer
    delete newValue;

    // arrow operator
    std::string *phrase = new std::string("all presidents are cool!");

    // access string's replace method usine arrow operator
    (*phrase).replace(22, 4, "oked");
    phrase->replace(22,4, "oaked");
    (*phrase)[10] = 't';

    delete phrase; // free memory by deleting/freeing pointer when pointer is allocated using 'new' keyword and avoid frequently freeing multiple time
    phrase = nullptr; // for NULL keyword import #include <cstddef> to compile

    phrase = new std::string("welcome back");

    // check null pointer before using it
    if ( phrase != nullptr)
    {
        std::cout << *phrase << std::endl;
    }

    // not for copy pointer
    // when copy pointer it only copy address and not reference and will become two reference for variable or array
    // to create copy of array will need to create second array same size and copy data index by index from first array into second array

    // passing pointer variable to functions
    int myNumber = 30;
    std::cout << "before function:" << std::endl;
    std::cout << myNumber << std::endl;

    changesAreGood(myNumber); // pass by value and variable value not update after function call
    std::cout << "after function:" << std::endl;
    std::cout << myNumber << std::endl; // mynumber 30

    changesAreGood2(&myNumber); // pass the address for variable into function
    std::cout << "after function update variable value" << std::endl;
    std::cout << myNumber << std::endl; // mynumber 40

    // function return pointer
    std::string *newCode;

    for( int index = 0; index < 5; index++) 
    {
        newCode = getSecretCode();
        std::cout << *newCode << std::endl;
    }
}