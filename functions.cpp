#include <iostream>
using namespace std;

int mul(int a, int b)
{
    int s = a * b;
    return s;
}

int sumN(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}

int factN(int m)
{
    int fac = 1;
    for (int j = 1; j <= m; j++)
    {
        fac *= j;
    }
    return fac;
}

int sumDigitN(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int i = n % 10;
        n = n / 10;
        sum = sum + i;
    }
    return sum;
}
int binomialCof(int n, int r)
{
    int res = 0;
    int x = factN(n);
    int y = factN(r);
    int c = n - r;
    c = factN(c);
    res = (x / y) / c;
    return res;
}
int main()
{
    cout << mul(10, 15) << endl;
    cout << sumN(100) << endl;
    cout << factN(15) << endl;
    cout << sumDigitN(14519) << endl;
    cout << binomialCof(8, 2) << endl;
    return 0;
}