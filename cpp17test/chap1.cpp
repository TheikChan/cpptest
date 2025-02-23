#include <iostream>
#include <map>

template <typename T>
void linePrinter(const T &x)
{
    // constexpr - to discard code at compile time used to match tmeplate parameter
    // _v variable template for type trait
    if constexpr (std::is_integral_v<T>)
        std::cout << "num: " << x << '\n';

    else if constexpr (std::is_floating_point_v<T>)
    {
        const auto frac = x - static_cast<long>(x);
        std::cout << "flt: " << x << ", frac " << frac << '\n';
    }
    else
        std::cout << x << '\n';
}

template <typename... Args>
void printWithInfo(Args... args)
{
    (linePrinter(args), ...); // fold expressiont over comma operator
}

int main()
{
    std::map<std::string, int> mapUsersAge{{"Alex", 45}, {"John", 25}};
    std::map mapCopy{mapUsersAge};

    if (auto [iter, wasAdded] = mapCopy.insert_or_assign("John", 26); !wasAdded)
        std::cout << iter->first << " reassigned...\n";

    for (const auto &[key, value] : mapCopy)
        std::cout << key << " , " << value << '\n';

    int i = 10;
    float f = 2.56f;
    printWithInfo(&i, &f, 30);
}