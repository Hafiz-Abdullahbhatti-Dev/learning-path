/*
 * Program Name: Standard Multiplication Table Generator
 * Description: A basic C++ program that takes an integer input from the user 
 * and generates its multiplication table from 1 to 10.
 * Logic: Uses a 'for' loop to iterate from 1 to 10 and displays the 
 * product of the input number and the loop counter.
 * Author: Mani (GitHub: mani)
 */

#include <iostream>
using namespace std;

int main() {
    int n;

    // Prompt user for input
    cout << "Enter the number for the table: ";
    cin >> n;

    cout << "--- Multiplication Table for " << n << " ---" << endl;

    // Loop to calculate and print the table from 1 to 10
    for (int i = 1; i <= 10; i++) {
        // Output format: n * i = result
        cout << n << " * " << i << " = " << (n * i) << endl;
    }

    return 0;
}