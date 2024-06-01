#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    int userInput;
    double squareRoot;
    cout << "Enter a positive integer: ";
    cin >> userInput;

    if (userInput < 0) 
   {
        cout << "Error: Please enter a positive integer." << endl;
        return 0;
    }

    squareRoot = sqrt(userInput);

    cout << "Square root of " << userInput << " is: " << squareRoot << endl;

    return 0;
}

