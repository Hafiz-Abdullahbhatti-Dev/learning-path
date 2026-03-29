/*
 * Program Name: Digital Root Calculator (Sum of Digits)
 * Description: A C++ program that repeatedly sums the digits of a number 
 * until a single-digit result is obtained.
 * Logic: Uses nested while loops. The inner loop sums the digits, 
 * and the outer loop repeats the process if the result is still > 9.
 * Author: Mani (GitHub: mani)
 */

#include <iostream>
using namespace std;

int main() {
    long num, rem;
    
    cout << "Enter a number: ";
    cin >> num;

    int originalNum = num; // Input store karne ke liye

    // Outer loop: Jab tak number single digit na ban jaye
    while (num > 9) {
        int ans = 0;
        
        // Inner loop: Current number ke digits ka sum nikalna
        while (num > 0) {
            rem = num % 10;
            ans = ans + rem;
            num = num / 10;
        }
        // Sum ko naya number assign karna
        num = ans;
    }

    cout << "The digital root of " << originalNum << " is: " << num << endl;

    return 0;
}