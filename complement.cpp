#include <iostream>
#include <string>

using namespace std;

int main()
{
    int number;

    // Input from user
    cout << "Enter an integer (positive or negative): ";
    cin >> number;

    // Step 1: Convert to binary
    string binary = "";
    int n = (number >= 0) ? number : -number; // Use absolute value for conversion

    // Loop to convert to binary
    for (int i = 31; i >= 0; --i)
    {
        binary = ((n & (1 << i)) ? '1' : '0') + binary;
    }

    // If the number is negative, perform 2's complement
    if (number < 0)
    {
        // Invert the bits
        for (char &bit : binary)
        {
            bit = (bit == '0') ? '1' : '0';
        }

        // Add 1 to the inverted binary
        bool carry = true; // Start with carry for addition
        for (int i = 31; i >= 0; --i)
        {
            if (carry)
            {
                if (binary[i] == '0')
                {
                    binary[i] = '1';
                    carry = false; // No more carry needed
                }
                else
                {
                    binary[i] = '0'; // Continue carry
                }
            }
        }
    }

    // Output the binary representation
    cout << "Binary representation: " << binary << endl;

    // Step 2: Verify the 2's complement
    int twosCompInt = 0;
    for (int i = 0; i < 32; ++i)
    {
        if (binary[i] == '1')
        {
            twosCompInt += (1 << (31 - i)); // Convert back to integer
        }
    }

    // Check if original number + 2's complement equals 0
    if (number + twosCompInt == 0)
    {
        cout << "2's complement is verified successfully." << endl;
    }
    else
    {
        cout << "Verification failed." << endl;
    }

    return 0;
}
