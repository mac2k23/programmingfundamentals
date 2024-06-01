#include <iostream>
using namespace std;

int main() 
{
    const int size = 2;
    int array[size][size];

    cout << "Enter the values for the 7x7 array:" << endl;
    for (int i = 0; i < size; ++i) 
	{
        for (int j = 0; j < size; ++j) 
		{
            cout << "Enter value for element at position " << i + 1 << "x" << j + 1 << ": ";
            cin >> array[i][j];
        }
    }

    cout << "\nThe entered array is:\n";
    for (int i = 0; i < size; ++i) 
	{
        for (int j = 0; j < size; ++j) 
		{
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    int sumLeftDiagonal = 0;
    for (int i = 0; i < size; ++i) 
	{
        sumLeftDiagonal = sumLeftDiagonal + array[i][i];
    }
    cout << "\nThe sum of left diagonal entries is: " << sumLeftDiagonal << endl;

    return 0;
}

