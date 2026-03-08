#include <iostream>
using namespace std;

int main() {
    int rows, columns;

    // User se input lena
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> columns;

    // Outer loop: Rows (Liniyan) control karta hai
    for (int i = 1; i <= rows; i++) {
        
        // Inner loop: Columns (Sitaray) print karta hai
        for (int j = 1; j <= columns; j++) {
            cout << "* ";
        }
        
        // Aik row khatam hone ke baad agli line par jana
        cout << endl;
    }

}