#include <iostream>
using namespace std;

int linearSearch(int arr[], int target, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    // array to do the search
    int arrr[] = {4, 5, 1, 0, 2, 15, 41, 20};

    // Target elemt;
    int target = 0;
    int size = 8;

    // calling linear search

    cout << linearSearch(arrr, target, size) << endl;
    return 0;
}