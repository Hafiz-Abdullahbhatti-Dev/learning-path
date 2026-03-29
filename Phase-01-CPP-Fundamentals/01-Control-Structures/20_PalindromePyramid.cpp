/*
 * Program Name: Palindrome Number Pyramid
 * Description: A C++ program that prints a symmetric (palindrome) number pyramid.
 * Logic: Uses three nested loops:
 * 1. For leading spaces.
 * 2. For incrementing numbers (1 to i).
 * 3. For decrementing numbers (i-1 down to 1).
 * Author: Mani (GitHub: mani)
 */

#include <iostream>
using namespace std;

int main() {
    int n;

    // Prompt user for the number of rows
    cout << "Enter the number of rows: ";
    cin >> n;

    // Outer loop for rows
    for (int i = 1; i <= n; i++) {
        
        // Inner Loop 1: Printing spaces for alignment
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }

        // Inner Loop 2: Printing incrementing numbers
        for (int z = 1; z <= i; z++) {
            cout << z << " ";
        }

        // Inner Loop 3: Printing decrementing numbers to create palindrome effect
        for (int k = i - 1; k >= 1; k--) {
            cout << k << " ";
        }

        // Move to the next line
        cout << endl;
    }

    return 0;
}
