/*
 * Program Name: Palindrome Number Checker
 * Description: A C++ program that checks if a number is a palindrome (reads the same forward and backward).
 * Logic: Reverses the number and compares it with the original input.
 * Author: Mani (GitHub: mani)
 */

#include <iostream>
#include <climits> // INT_MAX ke liye
using namespace std;

int main() {
    int num, ans = 0, rem; 
    cout << "Enter a number to check if it's a Palindrome: ";
    cin >> num;

    int original = num; // Original number ko save karna zaroori hai

    if (num < 0) {
        cout << num << " is NOT a palindrome (Negative numbers cannot be palindromes)." << endl;
    } else {
        while (num > 0) {
            rem = num % 10;
            
            // Overflow Check
            if (ans > INT_MAX / 10) {
                cout << "Error: Number too large to reverse!" << endl;
                return 0;
            }
            
            ans = ans * 10 + rem;
            num = num / 10;
        }

        // Comparison Logic
        if (ans == original) {
            cout << "Yes, " << original << " is a Palindrome!" << endl;
        } else {
            cout << "No, " << original << " is NOT a Palindrome." << endl;
        }
    }

    return 0;
}