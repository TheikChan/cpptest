#include <iostream>
#include <vector>

int findMissingNumber(const std::vector<int> &arr)
{
    int n = arr.size() + 1;
    int totalSum = n * (n + 1) / 2;
    int arraySum = 0;

    for (int num : arr)
    {
        arraySum += num;
    }

    return totalSum - arraySum;
}

int main()
{
    std::vector<int> arr = {1, 2, 3, 5};
    std::cout << "The missing number is: " << findMissingNumber(arr) << std::endl;
    return 0;
}