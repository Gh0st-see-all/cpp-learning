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

    return 0;
}
