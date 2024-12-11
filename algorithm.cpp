#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{

    // Sorting

    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // sort string alphabetically default ascending order
    sort(cars.begin(), cars.end());

    vector<int> numbers = {1, 7, 3, 5, 9, 2};

    // Sort numbers numerically
    sort(numbers.begin(), numbers.end());

    // Sort numbers numerically, starting from the fourth element (only sort 5, 9, and 2)
    sort(numbers.begin() + 3, numbers.end());

    // Searching

    // search number 3 from numbers vector
    // auto it = find(numbers.begin(), numbers.end(), 3);

    // Find the first value that is upper bound (greater than) 5 in the sorted vector
    auto it = upper_bound(numbers.begin(), numbers.end(), 5); // upper_bound used on sorted vector

    // Find the smallest number
    auto smallest_number = min_element(numbers.begin(), numbers.end());

    // Find the largest number
    auto largest_number = max_element(numbers.begin(), numbers.end());

    // Copy

    // Create a vector called copiedNumbers that should store 6 integers
    vector<int> copiedNumbers(6);

    // Copy elements from numbers to copiedNumbers
    copy(numbers.begin(), numbers.end(), copiedNumbers.begin());

    // Create a vector called numbers that will store 6 integers
    vector<int> empty_numbers(6);

    // Fill all elements in the numbers vector with the value 35
    fill(empty_numbers.begin(), empty_numbers.end(), 35);

    return 0;
}