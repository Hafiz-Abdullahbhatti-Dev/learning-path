/*
 * Program Name: Integer Reverse (with Overflow Check)
 * Description: A C++ program that reverses the digits of a number.
 * It returns 0 if the reversed number exceeds the 32-bit integer range.
 * Author: Mani (GitHub: mani)
 */

#include <iostream>
#include <climits> // Important for INT_MAX and INT_MIN
using namespace std;

int main() {
    int num, ans = 0, rem; 
    cout << "Enter your desired number: ";
    cin >> num;
    
    int original = num; // Input store karne ke liye

    while (num > 0) {
        rem = num % 10;
        num = num / 10;
        
        // Overflow Protection Logic
        if (ans > INT_MAX/10 || ans < INT_MIN/10) {
            ans = 0; // Reset ans to 0 as per logic
            break;   // Loop se bahar nikal jayein
        }
        
        ans = ans * 10 + rem;
    }
    
    cout << "Reversed result: " << ans << endl;
    return 0;
}