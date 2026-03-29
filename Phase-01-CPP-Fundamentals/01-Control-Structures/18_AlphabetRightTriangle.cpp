/*
 * Program Name: Alphabet Right-Aligned Triangle
 * Description: A C++ program that prints a right-aligned triangle pattern using alphabets.
 * Logic: Uses nested 'for' loops. The first inner loop prints spaces for alignment, 
 * and the second inner loop prints alphabets starting from 'A' up to the current row.
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
        
        // Inner loop 1: Prints spaces for right-alignment
        for (int j = 1; j <= n - i; j++) {
            cout << "  "; // Two spaces to match the character spacing
        }

        // Inner loop 2: Prints alphabets from 'A' up to current row index
        for (char z = 'A'; z <= 'A' + i - 1; z++) {
            cout << z << " ";
        }

        // New line after each row
        cout << endl;
    }

    return 0;
}