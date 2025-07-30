#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int binCon(int a)
{
    string b;
    int n = a;
    int c;
    // a% 2 -> store the answer in the variable(string)
    while (n >= 1)
    {
        c = n % 2;
        n = n / 2;
        b = b + to_string(c);
    }
    reverse(b.begin(), b.end());
    cout
        << "Binary Equivalent is: " << b << " of: ";
    return a;
}

int binToDec(string a)
{
    reverse(a.begin(), a.end());
    int mul = 1;
    int res = 0;
    for (char ch : a)
    {
        int num = ch - '0';
        int result = num * mul;
        mul = mul * 2;
        cout << "value of mul " << mul << endl;
        res = res + result;
    }
    return res;
}
int main()
{
    cout << binCon(90) << endl;
    cout << binToDec("1011010") << endl;
    return 0;
}