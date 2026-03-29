/*
 * Program Name: Odd Number Generator
 * Description: A C++ program that prints all odd numbers from 1 up to a user-defined limit (n).
 * Logic: Uses a 'while' loop and the modulo operator (%) to identify numbers 
 * that are not divisible by 2.
 * Author: Mani (GitHub: mani)
 */

#include <iostream>
using namespace std;

int main() {
    int n, i = 1;

    cout << "Enter your desired limit: ";
    cin >> n;

    // Validation for zero or negative numbers
    if (n < 1) {
        cout << "Error: Please enter a number greater than or equal to 1." << endl;
    } else {
        cout << "Odd numbers up to " << n << " are: " << endl;
        
        // Loop from 1 to n
        while (i <= n) {
            // Logic: If remainder is not 0 when divided by 2, it's an odd number
            if (i % 2 != 0) {
                cout << i << " ";
            }
            i++; // Increment counter
        }
        cout << endl;
    }

    return 0;
}