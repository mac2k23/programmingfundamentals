#include <iostream>
using namespace std;
int main() 
{
    int decimalNumber;
    cout << "Enter decimal no: ";
    cin >> decimalNumber;

    if (decimalNumber >= 0 && decimalNumber <= 255) 
	{
        int binaryArray[8];
        int index = 7;

        while (decimalNumber > 0 && index >= 0) 
		{
            binaryArray[index] = decimalNumber % 2;
            decimalNumber /= 2;
            index--;
        }

        cout << "Binary representation: ";
        for (int i = index + 1; i < 8; ++i) 
		{
            cout << binaryArray[i];
        }
        cout << endl;
    } 
	else 
	{
		cout << "Invalid input. Please enter a number in the range 0-255 " << endl;
    }
    return 0;
}

