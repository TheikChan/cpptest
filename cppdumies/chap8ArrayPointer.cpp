#include <iostream>

// compiler will treat number array as pointer
int addUp(int numbers[], int count)
{
    int loop;
    int sum = 0;
    for (loop = 0; loop < count; loop++)
    {
        sum += numbers[loop];
    }

    return sum;
}

int addUpArray(int *numbers, int count) 
{
    return *(numbers + 3); // return array index 3 value
}

// specify multi dimentional array size on parameter compiler will treak numbers[5] and each item include array of size 6 
int addUpMultiArray(int numbers[5][6]) 
{

}

int main()
{
    int numbers[10];
    int myNumbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int myNumbers[5] = { 1, 2, 3, 4, 5, 6, 7};

    // calculate array size
    const int numberSize = sizeof(myNumbers) / sizeof(int);
    std::cout << addUp(myNumbers, numberSize) << std::endl;

    // multidimensional array
    int memorizeThis[10][20];

    for ( int x = 0; x < 10; x++)
    {
        for ( int y = 0; y < 20; y++) 
        {
            memorizeThis[x][y] = x * y;
        }
    }

    std::cout << memorizeThis[9][13] << std::endl;
    std::cout << sizeof(memorizeThis) / sizeof(int) << std::endl;

    // array data type byte values of the same size
    int intArray[20][20]; // size 800 bytes
    char charArray[20][20]; // size 400 bytes
    short shortArray[20][20]; // size 800 bytes
    long longArray[20][20]; // size 1,600 bytes
    float floatArray[20][20];// size 1,600 bytes
    double doubleArray[20][20];// size 3,200 bytes

    int numbers[5][6] = {
        {1,2,3,4,5,6},
        {7,8,9,10,11,12},
        {13,14,15,16,17,18},
        {19,20,21,22,23,24},
        {25,26,27,28,29,30}
    };

    // allocate array on heap
    int *myArray = new int[5];
    delete myArray; // delete array from heap
}