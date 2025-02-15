#include <iostream>

int main()
{

    int i;
    std::cout << "Type any number: ";
    std::cin >> i;

    if (i > 10)
    {
        std::cout << "it's greater than 10." << std::endl;
    }
    else if (i == 10)
    {
        std::cout << "it's equal to 10." << std::endl;
    }
    else
    {
        std::cout << "it's not greater then 10." << std::endl;
    }

    // conditional operator
    std::string result = i == 10 ? "equal" : "not equal";

    // repeating action with loop
    for (int i = 0; i <= 10; i++)
    {
        if (i == 3)
        {
            continue;
        }
        if (i == 5)
        {
            break;
        }

        // nested loop
        for (int j = i; j <= 10; j++)
        {
            std::cout << "for number j is: " << j << std::endl;
        }

        std::cout << "for number i is: " << i << std::endl;
    }

    int i = 1;
    while (i < 10)
    {
        std::cout << "while number is: " << i << std::endl;
    }

    do
    {
        std::cout << "do whil number is: " << i << std::endl;
    } while (i < 10);

    // switch statements

    int x = 7;
    
    switch (x)
    {
    case 5:
        std::cout << "number is euqal to 5 " << std::endl; 
        break;
    case 10:
        std::cout << "number is euqal to 10 " << std::endl;
        break;
    default:
        std::cout << "unknown number " << x << std::endl;
        break;
    }

    return 0;
}