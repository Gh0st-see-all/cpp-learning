#include <iostream>
using namespace std;

int main()
{
    cout << "Ansh Kumar Tripathi" << endl
         << "I am learning C++ watching Apna College" << endl;
    int age;
    cout << "Guess my Age!\n!";
    cin >> age;

    if (age == 20)
    {
        cout << "You guess it right\n";
    }
    else
    {
        cout << "Nope\n";
    }
    return 0;
}