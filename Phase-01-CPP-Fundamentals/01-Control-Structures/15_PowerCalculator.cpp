/*
 * Program Name: Power Calculator (Exponentiation)
 * Description: A C++ program that calculates the power of a number.
 * It takes a base (n) and an exponent (p) and finds n raised to the power p.
 * Logic: Uses a 'for' loop to multiply the base 'n', 'p' number of times.
 * Author: Mani (GitHub: mani)
 */

#include <iostream>
using namespace std;

int main() {
    int base, exponent;
    long long result = 1; // Using long long to handle larger power results

    // Input the base and the power
    cout << "Enter the base number: ";
    cin >> base;
    cout << "Enter the exponent (power): ";
    cin >> exponent;

    // Loop runs 'exponent' times to multiply the base
    for (int i = 1; i <= exponent; i++) {
        result = result * base;
    }

    // Displaying the final result
    cout << base << " raised to the power " << exponent << " is: " << result << endl;

    return 0;
}