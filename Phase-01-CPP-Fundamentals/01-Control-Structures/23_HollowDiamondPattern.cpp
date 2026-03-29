/*
 * Program Name: Hollow Diamond In Square Pattern
 * Description: A C++ program that prints a square with a hollow diamond shape in the center.
 * Logic: 
 * 1. Upper Part: Stars decrease from sides, creating an expanding hollow space.
 * 2. Lower Part: Stars increase from sides, creating a shrinking hollow space.
 * Author: Mani (GitHub: mani)
 */

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    // --- Upper Half ---
    for (int i = 1; i <= n; i++) {
        // Left stars
        for (int j = n; j >= i; j--) {
            cout << "* ";
        }
        // Middle spaces (Diamond opening)
        for (int k = 1; k < i; k++) {
            cout << "    "; 
        }
        // Right stars
        for (int z = n; z >= i; z--) {
            cout << "* ";
        }
        cout << endl;
    }

    // --- Lower Half ---
    for (int i = 1; i <= n; i++) {
        // Left stars
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        // Middle spaces (Diamond closing)
        for (int k = n; k > i; k--) {
            cout << "    ";
        }
        // Right stars
        for (int z = 1; z <= i; z++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
