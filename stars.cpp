#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    // Lines
    for (int i = 1; i <= n; i++)
    {
        int a = 5;

        for (int j = 0; j < a; j++)
        {
            cout << "*";
        }

        cout << "\n";
    }

    // Square pattern
    int lin = 4;
    for (int k = 1; k <= lin; k++)
    {
        for (int t = 1; t <= lin; t++)
        {
            cout << t;
        }
        cout << "\n";
    }

    // B
    for (int z = 1; z <= lin; z++)
    {
        for (int y = 1; y <= z; y++)
        {
            cout << y;
        }
        cout << endl;
    }

    // C
    for (int x = 1; x <= lin; x++)
    {
        for (int w = 1; w <= x; w++)
        {
            cout << x;
        }
        cout << endl;
    }
    // D
    for (int a = 1; a <= lin; a++)
    {
        for (int b = lin; b >= a; b--)
        {
            cout << " ";
        }
        int l = a;
        while (l > 0)
        {
            cout << l;
            l--;
        }
        cout << endl;
        // cout << a << endl;
    }
    int lum = 1;
    char ch = 'A';
    for (int g = 0; g < lin; g++)
    {

        for (int h = 0; h < lin; h++)
        {
            cout << lum << " ";
            lum++;
        }
        for (int n = 0; n < lin; n++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}