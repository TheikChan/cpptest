void bubbleSort(int arr[], int n)
{
    // loop till the size of array (n-1)and largest will correct position at end of array
    for (int i = 0; i < n - 1; i++)
    {
        // loop until (n-i-1) and pass largest element among first (n-i) is placed at end section and no need to consider next pass
        for (int j = 0; j < n - i - 1; j++) // - 1 because room for swap current and next item
        {
            // conpare current element is greater than next element than swap it
            if (arr[j] > arr[j + 1])
            {
                // swap current arr[j] and next item arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[6] = {7, 4, 2, 1, 3, 5};
    bubbleSort(arr, 6);
}

// debugging
// i = 0, i < 6 - 1 = 5, i++
// j = 0, j < 6 - 0 - 1 = 5; j++
// if arr[0] > arr[0+1=1]
// swap arr[0] and arr[i]