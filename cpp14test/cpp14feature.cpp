#include <iostream>

// Depreciated attribute [[Depreciated("reason")]]
[[depreciated("this function will be replaced with template add function")]]
int add(int a, int b)
{
    return a + b;
}

// variable template
template <typename T>
T pi = T(3.1415926535897932384626433L);

// Generic Lamda
// auto addLambda = [](auto x, auto y)
// { return x + y; };

// Return type detudction
auto increment(int &a)
{
    a++;
    return a;
}

decltype(auto) decrement(int &a)
{
    a--;
    return a;
}

int main()
{

    // Digit Separator = '
    long totalAmount = 1'050'000;

    // binary literals = 0b or 0B
    int b1 = 0xFF; // 11111111
    int b2 = 0b1111'1111;

    // calling variable template
    std::cout.precision(std::numeric_limits<long double>::max_digits10);
    std::cout << pi<int> << std::endl;
    std::cout << pi<float> << std::endl;
    std::cout << pi<double> << std::endl;
    std::cout << pi<long double> << std::endl;

    pi<char> = 'a';
    std::cout << pi<char> << std::endl; // will print a

    // std::cout << addLambda(1, 2) << std::endl;            // will print 3
    // std::cout << addLambda("Theik", "Chan") << std::endl; // will print TheikChan

    return 0;
}