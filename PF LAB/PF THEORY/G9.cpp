#include <iostream>
#include <cmath>
using namespace std;

int ComputePower(int base, int exponent) 
{
    return pow(base, exponent);
}

int main() 
{
    int base, exponent;

    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;

    int result = ComputePower(base, exponent);

    cout << "Result: " << result << endl;

    return 0;
}

