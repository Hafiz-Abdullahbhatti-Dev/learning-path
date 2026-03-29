/*
 * Program Name: Binary to Decimal Converter
 * Description: A C++ program that converts a binary number (0s and 1s) into its decimal equivalent.
 * Logic: Extracts each digit from right to left, multiplies it by increasing powers of 2, 
 * and adds them to get the final decimal result.
 * Author: Mani (GitHub: mani)
 */

#include <iostream>
using namespace std;

int main() {
    int num, ans = 0, mul = 1, rem;

    cout << "Enter a binary number (0s and 1s): ";
    cin >> num;

    int temp = num; // Original number store karne ke liye

    while (num > 0) {
        rem = num % 10;      // Last digit nikalna
        num = num / 10;      // Number ko chota karna
        ans = ans + (rem * mul); // Power of 2 se multiply karke add karna
        mul = mul * 2;       // Agli power (1, 2, 4, 8...)
    }

    cout << "Decimal equivalent of " << temp << " is: " << ans << endl;

    return 0;
}