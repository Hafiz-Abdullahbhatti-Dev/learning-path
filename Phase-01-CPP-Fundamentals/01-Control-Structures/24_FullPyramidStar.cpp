/*
 * Program Name: Full Pyramid Star Pattern
 * Description: A C++ program that prints a center-aligned full pyramid using stars (*).
 * Logic: Uses a leading space loop that decreases as the row number increases, 
 * combined with a star-space " * " output to create a symmetric pyramid.
 * Author: Mani (GitHub: mani)
 */

#include <iostream>
using namespace std;

int main() {
    int n;

    // User input for pyramid height
    cout << "Enter the number of rows: ";
    cin >> n;

    // Outer loop for rows
    for (int i = 1; i <= n; i++) {
        
        // Inner loop 1: Leading spaces (decreasing)
        for (int j = n; j >= i; j--) {
            cout << " "; 
        }

        // Inner loop 2: Stars with a trailing space
        for (int k = 1; k <= i; k++) {
            cout << "* ";
        }

        // Move to the next line
        cout << endl;
    }

    return 0;
}