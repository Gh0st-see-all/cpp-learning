#include <iostream>
using namespace std;

bool checP(int n)
{
    if (n < 2)
        return false; // 0 and 1 are not prime numbers
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false; // Found a divisor, not prime
        }
    }
    return true; // No divisors found, it's prime
}

void allPrimN(int n)
{
    cout << "Prime numbers up to " << n << " are: ";
    for (int i = 2; i <= n; i++)
    {
        if (checP(i))
        {
            cout << i << " "; // Print the prime number directly
        }
    }
    cout << endl;
}

int fibiNacci(int n)
{
    if (n == 0)
        return 0; // Base case for 0
    if (n == 1)
        return 1; // Base case for 1

    return fibiNacci(n - 1) + fibiNacci(n - 2); // Recursive case
}

void printFibonacciSeries(int n)
{
    cout << "Fibonacci series till " << n << ": ";
    for (int i = 0; i <= n; i++)
    {
        cout << fibiNacci(i) << " "; // Print each Fibonacci number
    }
    cout << endl;
}

int main()
{
    cout << "Checking if 10 is prime: " << endl;
    if (checP(10))
    {
        cout << "Number is prime.\n";
    }
    else
    {
        cout << "Number is not prime.\n";
    }

    cout << "All prime numbers up to 17:\n";
    allPrimN(17);

    printFibonacciSeries(15); // Print Fibonacci series till 5

    return 0;
}
