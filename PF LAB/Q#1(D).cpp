#include <iostream>
using namespace std;
int main() 
{
    int number, reversedNumber = 0, remainder;
    cout << "Enter a number: ";
    cin >> number;

    do 
	{
        remainder = number % 10;

        reversedNumber = reversedNumber * 10 + remainder;

        number = number / 10;

    } while (number != 0);

    cout << "Reversed number: " << reversedNumber << endl;

    return 0;
}
