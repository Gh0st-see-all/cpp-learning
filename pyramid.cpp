#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << "_";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << k + 1 << "_";
        }
        for (int m = i; m > 0; m--)
        {
            cout << m << "_";
        }
        cout << endl;
    }

    int a = 4;
    for (int b = 0; b < a; b++)
    {
        for (int c = a; c > b; c--)
        {
            cout << "_";
        }
        for (int d = 1; d < 2; d++)
        {
            cout << "*";
        }
        for (int e = b - 2; e >= 0; e--)
        {
            cout << "_";
        }
        for (int g = 1; g <= b; g++)
        {
            cout << "_";
        }
        for (int f = 1; f <= 1; f++)
        {
            if (b == 0)
            {
                cout << "";
            }
            else
            {
                cout << "*";
            }
        }

        cout << endl;
    }
    for (int h = 1; h < a; h++)
    {
        for (int q = 0; q < h + 1; q++)
        {
            cout << "_";
        }
        for (int t = 0; t < 1; t++)
        {
            cout << "*";
        }
        for (int j = a - 2; j > h; j--)
        {
            cout << "_";
        }
        for (int o = a - 1; o > h; o--)
        {
            cout << "_";
        }
        for (int r = 0; r < 1; r++)
        {
            if (h == 3)
            {
                cout << "";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}