#include <iostream>
#include <limits> // Include this header for numeric_limits
using namespace std;

int main()
{
    int marks[5] = {1, 2, 3, 4, 50};

    // Static array of length 5
    int nums[5] = {40, 1, 50, 9, -10};

    // Finding the smallest number in the array nums
    int smallest = numeric_limits<int>::max(); // Use numeric_limits for max value
    int largest = numeric_limits<int>::min();  // Initialize to the smallest possible int
    int smallestIndex = -1;                    // Initialize index for smallest
    int largestIndex = -1;                     // Initialize index for largest

    for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++) // Correct size calculation
    {
        if (nums[i] < smallest)
        {
            smallest = nums[i];
            smallestIndex = i; // Store index of smallest
        }
    }

    cout << "Smallest = " << smallest << endl;
    cout << "At index " << smallestIndex << endl;

    for (int j = 0; j < sizeof(nums) / sizeof(nums[0]); j++) // Correct size calculation
    {
        if (nums[j] > largest)
        {
            largest = nums[j];
            largestIndex = j; // Store index of largest
        }
    }

    cout << "Largest = " << largest << endl;
    cout << "At index " << largestIndex << endl;

    // reverseing an array;
    int arr[] = {1, 5, 9, 7, 3, 6, 10};
    int size = 7;
    int start = 0;
    int end = size - 1;
    // method one
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    cout << "Step One reverse " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
    // Method two
    start = 0;
    end = size - 1;
    cout << "Step TWo reverse " << endl;
    for (int j = 0; j <= size / 2; j++)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ", ";
    }
    return 0;
}
