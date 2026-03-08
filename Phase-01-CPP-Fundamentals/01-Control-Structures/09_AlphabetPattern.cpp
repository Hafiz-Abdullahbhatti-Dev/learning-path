#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter number: ";
    cin >> n;

    // Outer loop: Rows ko control karta hai (A, B, C...)
    for (int i = 1; i <= n; i++) {
        
        // Inner loop: Har row mein kitne letters print honge
        for (int j = 1; j <= n; j++) {
            // Logic: 64 + 1 = 65 ('A'), 64 + 2 = 66 ('B')
            cout << (char)(i + 64) << " "; 
        }
        
        // Aik row mukammal hone ke baad nayi line par jana
        cout << endl;
    }

    return 0;
}