#include <iostream>
using namespace std;
int main() 
{
    long long number;
    cout << "Enter a number: ";
    cin >> number;

    if (number < 0) {
        cout << "Factorial is undefined for negative numbers." << endl;
    } 
	else 
	{
        long long factorial = 1;
        for (int i = 1; i <= number; ++i) 
    	{
            factorial *= i;
        }
        cout << "Factorial of " << number << " is: " << factorial << endl;
    }

    return 0;
}

