#include <iostream>
using namespace std;

int main() {
    // Character variable to store and iterate through alphabets
    char letter;

    // Loop starts from 'a' and goes up to 'z'
    // In C++, characters are incremented based on their ASCII values
    for (letter = 'a'; letter <= 'z'; letter++) {
        // Printing each letter followed by a new line
        cout << letter << endl;
    }

    return 0;
}