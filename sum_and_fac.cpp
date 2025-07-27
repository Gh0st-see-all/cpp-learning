#include <iostream>
using namespace std;

int main()
{
    // Sum of number sfrom 1 to n divisble by 3
    int n = 6;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            sum = sum + i;
        }
    }
    cout << "Sum of n numbers: " << sum << "\n";

    // factorial of a number
    int fac = 10;
    int fac_n = 1;
    for (int j = 1; j <= fac; j++)
    {
        fac_n = fac_n * j;
    }
    cout << "Factorial of number is: " << fac_n << "\n";
    return 0;
}