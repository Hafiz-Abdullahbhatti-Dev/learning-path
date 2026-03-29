/*
 * Program Name: Power of Two Checker
 * Description: A C++ program that checks if a given number is a power of 2 (e.g., 1, 2, 4, 8, 16...).
 * Logic: Starts with i=1 and keeps multiplying it by 2. If it matches the number, it's a power of 2.
 * Author: Mani (GitHub: mani)
 */

#include <iostream>
using namespace std;

int main() {
    long long num, i = 1; // long long use kiya taake bade numbers handle ho sakein
    cout << "Enter a number to check if it's a power of 2: ";
    cin >> num;

    if (num <= 0) {
        cout << num << " is not a power of 2 (Negative/Zero)." << endl;
    } else {
        // Loop jab tak i chota hai num se
        while (i < num) {
            i = i * 2;
        }

        // Final check
        if (i == num) {
            cout << num << " is a power of 2!" << endl;
        } else {
            cout << num << " is NOT a power of 2." << endl;
        }
    }

    return 0;
}