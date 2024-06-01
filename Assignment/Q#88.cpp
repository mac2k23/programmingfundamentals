#include <iostream>
using namespace std;
int calculateFactorial(int n) 
{
    if (n == 0) 
    {
        return 1;
    }

    return n * calculateFactorial(n - 1);
}

int main() 
{
    int userInput;
    cout << "Enter a positive integer: ";
    cin >> userInput;

    if (userInput < 0) 
    {
        cerr << "Error: Please enter a non-negative integer." << endl;
        return 1;
    }

    int result = calculateFactorial(userInput);
    cout << "Factorial of " << userInput << " is: " << result << endl;

    return 0;
}

