#include <iostream>
#include <limits> // Include this header for numeric_limits

using namespace std;

void sumP(int arr[], int size)
{
    int sum = 0;
    int product = 1;
    for (int i = 0; i < size; i++)
    {
        sum = arr[i] + sum;
        product = arr[i] * product;
    }
    cout << "Sum is " << sum << endl;
    cout << "Product is " << product << endl;
}

void swapMinMax(int arr[], int size)
{
    int smallest = numeric_limits<int>::max();
    int si;
    int li;
    int largest = numeric_limits<int>::min();
    cout << "Before Swap " << endl;
    for (int j = 0; j < size; j++)
    {
        cout << arr[j] << ", ";
    }
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
            si = i;
        }
        if (arr[i] > largest)
        {
            largest = arr[i];
            li = i;
        }
    }
    swap(arr[si], arr[li]);
    cout << "After Swap " << endl;
    for (int j = 0; j < size; j++)
    {
        cout << arr[j] << ", ";
    }
    cout << endl;
}

void uniqueArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int num = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j] && i != j)
            {
                num = 1;
                break;
            }
        }
        if (num == 0)
        {
            cout << arr[i] << endl;
        }
    }
}

void intersectArr(int a[], int sizeA, int b[], int sizeB)
{
    for (int i = 0; i < sizeA; i++)
    {
        for (int j = 0; j < sizeB; j++)
        {
            if (a[i] == b[j])
            {
                cout << b[j] << " ";
            }
        }
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 1, 2, 3, 4};
    int size = 7;
    sumP(arr, size);
    swapMinMax(arr, size);
    uniqueArr(arr, size);
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int b[] = {2, 8, 7, 9, 4, 1};
    int sizeA = sizeof(a) / sizeof(a[0]);
    int sizeB = sizeof(b) / sizeof(b[0]);
    intersectArr(a, sizeA, b, sizeB);
    return 0;
}
