#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Welcome to text simulation that would text how to find the roots." << endl;
    cout << "Enter number to check if it is prime or not." << endl;
    cin >> num;

    bool isPrime = true;

    for (int i = 2; i * i <= num; i++)
    {
        cout << "Current value of i: " << i;
        cout << "\n";
        if (num % i == 0)
        {
            isPrime = false;
        }
    }
    if (isPrime == true)
    {
        cout << "Prime number \n";
    }
    else
    {
        cout << "Not a prime \n";
    }
    return 0;
}