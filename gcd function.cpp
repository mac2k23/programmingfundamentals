#include <iostream>
using namespace std;

int g_c_d(int a, int b) 
{
    // Check if either number is not positive
    if (a <= 0 || b <= 0) 
	{
        // Return 0 to indicate an error
        return 0;
    }

    // Euclidean algorithm to find GCD
    while (b != 0) 
	{
        int temp = b;
        b = a % b;
        a = temp;
    }

    // The GCD is stored in 'a'
    return a;
}

int main() 
{
    int num1, num2;
    cout << "Enter two positive integers: ";
    cin >> num1 >> num2;
    
    int gcd = g_c_d(num1, num2);
    
    if (gcd != 0) 
	{
        cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd << std::endl;
    } 
	else 
	{
        cout << "Error: At least one of the numbers is not positive." << std::endl;
    }

    return 0;
}

