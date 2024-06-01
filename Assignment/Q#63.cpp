#include <iostream>
using namespace std;
int main() 
{
    float decimalNumber;
    cout << "Enter a decimal number: ";
    cin >> decimalNumber;
    int wholePart = static_cast<int>(decimalNumber);
    float decimalPart = decimalNumber - wholePart;
    cout << "Sum of whole part and decimal part: " << wholePart + static_cast<int>(decimalPart * 10) << endl;

    return 0;
}

