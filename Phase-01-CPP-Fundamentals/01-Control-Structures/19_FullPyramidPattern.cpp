/*
 * Program Name: Full Pyramid Number Pattern
 * Description: A C++ program that prints a full pyramid pattern using numbers.
 * Logic: Uses nested loops. The first inner loop handles leading spaces, 
 * and the second inner loop calculates the odd number of elements (2*i - 1) for each row.
 * Author: Mani (GitHub: mani)
 */

#include <iostream>
using namespace std;

int main() {
    int n;

    // Prompt user for the number of rows/height of the pyramid
    cout << "Enter the number of rows: ";
    cin >> n;

    // Outer loop for each row
    for (int i = 1; i <= n; i++) {
        
        // Inner loop 1: Printing spaces for alignment
        for (int j = 1; j <= n - i; j++) {
            cout << "  "; 
        }

        // Inner loop 2: Printing numbers in a pyramid shape
        // The condition (2 * i - 1) ensures an odd number of elements per row
        for (int z = 1; z <= (2 * i - 1); z++) {
            cout << i << " "; // Printing the current row number
        }

        // Move to the next line
        cout << endl;
    }

    return 0;
}
