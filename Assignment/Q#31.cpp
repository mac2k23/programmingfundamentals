#include <iostream>
using namespace std;
void addFractions(int a, int b, int c, int d, int& numerator, int& denominator) 
{
    numerator = (a * d) + (b * c);
    denominator = b * d;
}
int main() 
{
    int numerator1, denominator1, numerator2, denominator2;
    
    cout << "Enter the first fraction in the form a/b: ";
    
    char slash;
    cin >> numerator1 >> slash >> denominator1;
    
    cout << "Enter the second fraction in the form c/d: ";
    cin >> numerator2 >> slash >> denominator2;
    
    if (denominator1 != 0 && denominator2 != 0) 
	{
        int resultNumerator, resultDenominator;
        addFractions(numerator1, denominator1, numerator2, denominator2, resultNumerator, resultDenominator);
        cout << "The sum of the fractions is: " << resultNumerator << "/" << resultDenominator << endl;
    } else {
        cout << "Denominator cannot be zero. Please enter valid fractions." << endl;
    }

    return 0;
}

