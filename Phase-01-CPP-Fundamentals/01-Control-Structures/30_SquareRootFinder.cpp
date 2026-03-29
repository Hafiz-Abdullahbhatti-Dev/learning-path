/*
 * Program Name: Perfect Square Root Finder
 * Description: A C++ program that finds the square root of a perfect square number.
 * Logic: Iterates from 1 up to 'num' and checks if i*i equals the input number.
 * Author: Mani (GitHub: mani)
 */

#include <iostream>
#include <cmath> // Math functions ke liye
using namespace std;

int main() {
    float num, i = 1; 
    bool found = false;

    cout << "Enter a number to find its square root: ";
    cin >> num;

    if (num < 0) {
        cout << "Error: Negative numbers don't have real square roots." << endl;
    } else if (num == 0) {
        cout << "Square root is: 0" << endl;
    } else {
        // Loop to find the square root
        while (i * i <= num) {
            if (i * i == num) {
                cout << "Square root of " << num << " is: " << i << endl;
                found = true;
                break;
            }
            i++;
        }

        if (!found) {
            cout << num << " is not a perfect square." << endl;
        }
    }

    return 0;
}