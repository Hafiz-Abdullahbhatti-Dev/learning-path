#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    // Outer loop: Rows control karta hai
    for (int i = 1; i <= n; i++) {
        
        // Inner loop: Columns control karta hai (j)
        for (int j = 1; j <= n; j++) {
            // Logic: 96 + 1 = 97 ('a'), 96 + 2 = 98 ('b')
            // 'j' use karne se har column mein naya letter aayega
            cout << (char)(j + 96) << " "; 
        }
        
        cout << endl;
    }

    return 0;
}