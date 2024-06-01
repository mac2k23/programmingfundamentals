#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    double diameter = 2 * radius;
    double circumference = 2 * M_PI * radius;  
    double area = M_PI * pow(radius, 2);
    cout << "Diameter: " << diameter << endl;
    cout << "Circumference: " << circumference << endl;
    cout << "Area: " << area << endl;
   return 0;
}

