#include <iostream>
using namespace std;
int main() {   
 double fahrenheit;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;
    double celsius = (fahrenheit - 32) / 1.8;
    double kelvin = celsius + 273;
    cout << "Temperature in Kelvin: " << kelvin << endl;
 return 0;
}

