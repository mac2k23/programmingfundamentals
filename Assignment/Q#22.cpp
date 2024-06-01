#include <iostream>
using namespace std;
int main() {
    double base, height;
    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;
    double area = (base * height) / 2.0;
    cout << "The area for the triangle with the base of " << base << " and the height of " << height << " is: " << area << endl;
    return 0;
}

