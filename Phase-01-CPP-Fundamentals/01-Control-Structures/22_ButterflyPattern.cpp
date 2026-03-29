/*
 * Program Name: Butterfly Star Pattern
 * Description: A complex C++ program that prints a symmetric butterfly shape using stars (*).
 * Logic: Divided into two main parts (Upper and Lower). 
 * Each part uses nested loops to manage stars and the growing/shrinking spaces in between.
 * Author: Mani (GitHub: mani)
 */

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size (number of rows): ";
    cin >> n;

    // --- Upper Part of the Butterfly ---
    for (int i = 1; i <= n; i++) {
        // Left stars
        for (int j = 1; j <= i; j++) cout << "* ";
        
        // Spaces in middle
        for (int j = 1; j <= 2 * (n - i); j++) cout << "  ";
        
        // Right stars
        for (int j = 1; j <= i; j++) cout << "* ";
        cout << endl;
    }

    // --- Lower Part of the Butterfly ---
    for (int i = n; i >= 1; i--) {
        // Left stars
        for (int j = 1; j <= i; j++) cout << "* ";
        
        // Spaces in middle
        for (int j = 1; j <= 2 * (n - i); j++) cout << "  ";
        
        // Right stars
        for (int j = 1; j <= i; j++) cout << "* ";
        cout << endl;
    }

    return 0;
}