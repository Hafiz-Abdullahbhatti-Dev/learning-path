#include <iostream>
using namespace std;

int main() {
    int y;
    cout << "Enter Year: ";
    cin >> y;

    // Check if the year is divisible by 400 (Century leap year rule)
    if (y % 400 == 0) {
        cout << y << " is a leap year.";
    }
    // If divisible by 100 but not 400, it is NOT a leap year
    else if (y % 100 == 0) {
        cout << y << " is NOT a leap year.";
    }
    // If divisible by 4 but not 100, it is a leap year
    else if (y % 4 == 0) {
        cout << y << " is a leap year.";
    }
    // If not divisible by 4, it is a common year
    else {
        cout << y << " is NOT a leap year.";
    }

}
