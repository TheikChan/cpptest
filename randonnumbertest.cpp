#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{

    // Generate a random number between 0 and 100
    int randomNum = rand() % 101;

    cout << randomNum;
    return 0;
}