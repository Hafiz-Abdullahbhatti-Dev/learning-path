/*
 * Program Name: Inverted Full Pyramid Star Pattern
 * Description: A C++ program that prints an inverted full pyramid using stars (*).
 * Logic: Uses nested loops where the outer loop starts from 'n' and decrements.
 * The inner loops handle leading spaces and the odd number of stars (2*i - 1).
 * Author: Mani (GitHub: mani)
 */

#include <iostream>
using namespace std;

int main() {
    int n;

    // Prompt user for the number of rows
    cout << "Enter the number of rows: ";
    cin >> n;

    // Outer loop: Starts from n and goes down to 1
    for (int i = n; i >= 1; i--) {
        
        // Inner Loop 1: Printing leading spaces for alignment
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }

        // Inner Loop 2: Printing stars in odd numbers (2*i - 1)
        for (int z = 1; z <= (i * 2) - 1; z++) {
            cout << "* ";
        }

        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}