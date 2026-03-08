#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            // Agar row number even hai to alphabet print karo
            if (i % 2 == 0) {
                cout << (char)(j + 64) << " ";
            } 
            // Agar row number odd hai to number print karo
            else {
                cout << j << " ";
            }
        }
        cout << endl;
    }
    return 0;
}