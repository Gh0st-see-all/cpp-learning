#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter your number to check ODD/EVEN: ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "Number is even!\n";
    }
    else
    {
        cout << "Number is odd\n";
    }

    // Uppercase and lowercase
    cout << "Enter your character!";
    char a;
    cin >> a;
    if (a >= 'a' && a <= 'z')
    {
        cout << "lower case\n";
    }
    else if (a >= 'A' && a <= 'Z')
    {
        cout << "Upercase\n";
    }
    else
    {
        cout << "Not a character\n";
    }

    cout << (num >= 18 ? "Eligible to vote" : "Not Eligible to vote") << endl;

    int count = 1;

    while (count <= 5)
    {
        int j = 1;
        while (j <= count)
        {
            cout << count;
            j++;
        }
        cout << "\n";
        count++;
    }
    cout << "\n";
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            cout << j;
        }
        cout << "\n";
    }
    cout << "\n";
    // Trying to print starts
    for (int a = 1; a < 5; a++)
    {

        for (int b = 4; b > a; b--)
        {
            cout << "0";
        }
        for (int k = 1; k <= a; k++)
        {
            cout << "_";
        }
        for (int l = 4; l > a; l--)
        {
            cout << "0";
        }
        cout << "\n";
    }
}