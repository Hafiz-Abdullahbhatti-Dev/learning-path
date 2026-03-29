/*
 * Program Name: Prime Number Checker
 * Description: A C++ program that determines if a given number (n) is a prime number.
 * Logic: A prime number is only divisible by 1 and itself. The program checks 
 * divisibility from 2 up to n/2.
 * Author: Mani (GitHub: mani)
 */

#include <iostream>
using namespace std;

int main() {
    int n;
    bool isPrime = true; // Assume the number is prime initially

    // Prompt user for input
    cout << "Enter a positive integer: ";
    cin >> n;

    // Numbers less than 2 are not prime
    if (n < 2) {
        cout << n << " is not a prime number." << endl;
        return 0;
    }

    // Loop to check divisibility from 2 to n-1
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            // If divisible, it's not a prime number
            isPrime = false;
            break; // Exit loop early for efficiency
        }
    }

    // Final output based on the flag
    if (isPrime) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}