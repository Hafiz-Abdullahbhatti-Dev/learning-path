/*
 * Program Name: Factorial Calculator
 * Description: A C++ program that calculates the factorial of a given number.
 * Logic: Uses a 'for' loop to multiply integers from 1 up to the input number (n!).
 * Author: Mani (GitHub: mani)
 */

#include <iostream>
using namespace std;

int main() {
    int n;
    // Using long long to store large factorial values (e.g., 20!)
    long long factorial = 1;

    // Prompt user for a positive integer
    cout << "Enter a positive integer: ";
    cin >> n;

    // Factorial of a negative number doesn't exist
    if (n < 0) {
        cout << "Error! Factorial of a negative number doesn't exist." << endl;
    } else {
        // Loop to multiply: 1 * 2 * 3 * ... * n
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        
        // Output the final result
        cout << "Factorial of " << n << " is: " << factorial << endl;
    }

    return 0;
}