#include <iostream>

#define macro -name replacement - text

#define PI 3.14159

// function macro
#define MIN(a, b) ((a) < (b) ? (a) : (b))

// conditional compilation
#ifndef NULL
#define NULL 0
#endif

#ifdef DEBUG
std::cerr << "variable x = " << x << std::endl;
#endif

// #, ## operator
// # convert to string surrounded by quotes
// ## concatenate

#define MKSTR(x) #x

#define concat(a, b) a##b

// predefined C++ macros
// _LINE_, _FILE_, _DATE_, _TIME_

int main()
{
    std::cout << PI << std::endl;
    std::cout << "minimun is: " << MIN(10, 20) << std::endl;

    std::cout << MKSTR(HELLO C++) << std::endl;

    int xy = 100;
    std::cout << concat(x, y) << std::endl; // will convert into xy 

    std::cout << "Value of _LINE_ :" << __LINE__ << std::endl;
    std::cout << "Value of _FILE_ :" << __FILE__ << std::endl;
    std::cout << "Value of _DATE_ :" << __DATE__ << std::endl;
    std::cout << "Value of _TIME_ :" << __TIME__ << std::endl;

    return 0;
}