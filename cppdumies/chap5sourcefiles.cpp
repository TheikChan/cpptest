#include <iostream>
#include "safestuff.h" // compiler will look on same directory/folder first and it don't see then will look other directories/folders

// const variables
const int ParkingSpace = 80;
const std::string StoreName = "Theik's Food Haeven";
const float pi = 3.1415926;

int main()
{
    std::cout << "surprise, surprise!" << std::endl;
    std::cout << SafeCracker(12) << std::endl;
    std::cout << SafeCracker(1) << std::endl;

    DoubleCheeseBurgers = 20;

    std::cout << ParkingSpace << std::endl;
    std::cout << StoreName << std::endl;

    float radius = 5;
    float area = radius * radius * pi;

    std::cout << "Area: " << std::endl;
}