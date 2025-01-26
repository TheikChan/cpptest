#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    
    std::cout << "Hello, C++!\n";
    
    // variable
    int file_size = 100;
    double sales = 9.99;
    
    std::cout << file_size ;
    
    // swap 2 variable
    int num1 = 1;
    int num2 = 2;
    
    int temp = num1;
    num1 = num2;
    num2 = temp;
    
    // constant
    const double pi = 3.14;
    
    // naming conversation e.g file_size(Snake Case), FileSize(Pascal Case), fileSize(Camel Case), iFileSize(Hungarian Notation)
    
    // Mathematical expression
    int x = 10;
    int y = 3;
    int z = (x + 10) / (3 * y); // *, /, -, ++, --
    
    std::cout << "z =" << z << std::endl;
    
    // read input value with cin
    std::cout << "Enter a value: ";
    
    int value;
    
    std::cin >> value;
    std::cout << value;
    
    std::cout << "Fahrenheit: ";
    int fahrenheit;
    std::cin >> fahrenheit;
    
    double celsius = (fahrenheit - 32) / 1.8;
    std::cout << celsius << endl;
    
    double result = pow(2, 3); // floor(1.2);
    std::cout << result ;
    
    std::cout << "Enter radius: ";
    double radius;
    std::cin >> radius;
    
    double area = pi * pow(radius, 2);
    
    // data types
    // short 2 byte range -32,768 to 32768
    // int 4 byte range -2b to 2b
    // long 4 byte range -2b to 2b
    // long long 8 byte
    
    // double 8 byte range -1.7E308 to 1.7E308
    // float 4 byte range -3.4E38 to 3.4E38
    // long double 8 byte range -3.4E932 to 1.7E4832
    
    // bool 1 byte range true/false
    // char 1 byte
    
//    double price = 9.99;
//    float interest = 3.67f;
//    long max_file_size = 9000l;
//    char letter = 'a';
//    bool is_valid = false;
    
    auto price = 9.99;
    auto interest = 3.67f;
    auto max_file_size = 9000l;
    auto letter = 'a';
    auto is_valid = false;
    
    int number {}; // {} initialize to 0 is same to = 0
    std::cout << number ;
    
    // number system
    // decimal (base 10) 0-9 e.g 255
    // binary (base 2) 0,1 e.g 1111
    // hexadecimal (base 16) 0-9, A-F e.g FF
    
    // unsigned keyword is not accept negative value
    unsigned int color = 0xff; // hexadecimal number 0xff // binary number 0b11111111; // decimal number 255;
    
    // narrowing
    int cash = 1'000'000;
    int withdraw {cash};
    std::cout << cash << withdraw << std::endl;
    
    // random number
    int credit_cash = rand();
    
    srand(5);
    
    long elapse_seconds = time(nullptr); // time(0) // Jan 1 1970
//    srand(elapse_seconds);
//    srand(time(0));
    std::cout << elapse_seconds << std::endl;
    
    const int max_value = 6;
    const int min_value = 1;
    
    short first = rand() % ( max_value - min_value + 1); // 6 max number, 1 minimum number
    short second = rand() % ( max_value - min_value + 1); // 6 max number, 1 minimum number
    
    std::cout << first << ", " << second << std::endl;
    
    return 0;
}