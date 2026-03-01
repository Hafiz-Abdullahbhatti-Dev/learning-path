#include <iostream >
using namespace std;
int main()
{

    double x, y;

    cout << "Enter the x and y coordinates: ";
    cin >> x >> y;

    if (x == 0 && y == 0) {
        std::cout << "The point is at the Origin." << endl;
    } 
    else if (x == 0) {
        std::cout << "The point lies on the Y-axis." <<endl;
    } 
    else if (y == 0) {
        std::cout << "The point lies on the X-axis." << endl;
    } 
    else if (x > 0 && y > 0) {
        std::cout << "The point is in the 1st Quadrant." <<endl;
        endl;
    } 
    else if (x < 0 && y > 0) {
        std::cout << "The point is in the 2nd Quadrant." <<endl;
    } 
    else if (x < 0 && y < 0) {
        std::cout << "The point is in the 3rd Quadrant." << endl;
    } 
    else {
        // Since all other cases are handled, this must be x > 0 and y < 0
        std::cout << "The point is in the 4th Quadrant." << endl;
    }


}
