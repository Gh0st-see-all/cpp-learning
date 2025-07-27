#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int k = n - 1; k > i; k--)
        {
            cout << "__";
        }
        // for (int a = n - i - 1; a > 0; a--)
        // {
        //     cout << "_";
        // }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    for (int b = 0; b < 4; b++)
    {
        for (int j = n - b - 1; j >= 0; j--)
        {
            cout << "*";
        }
        for (int t = 0; t < b; t++)
        {
            cout << "__";
        }
        for (int g = n - b - 1; g >= 0; g--)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}