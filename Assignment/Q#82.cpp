#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    double radius, area;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    if (radius < 0) 
   {
        cout << "Error: Please enter a non-negative radius." << endl;
        return 1;
    }

    area = M_PI * pow(radius, 2);

    cout << "The area of the circle with radius " << radius << " is: " << area << endl;

    return 0;
}

