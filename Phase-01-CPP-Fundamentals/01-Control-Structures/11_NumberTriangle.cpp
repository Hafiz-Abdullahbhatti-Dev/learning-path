#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    // Outer loop: Rows control karta hai
    for (int i = 1; i <= n; i++) {
        
        // Inner loop: Utni dafa chalega jitni row ka number hai
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        
        // Har row ke baad nayi line
        cout << endl;
    }

    return 0;
}