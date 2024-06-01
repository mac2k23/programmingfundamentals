#include <iostream>
using namespace std;
int ARRAY_SIZE = 15;
bool valueExists( int arr[], int size, int value) 
{
    for (int i = 0; i < size; ++i) 
    {
        if (arr[i] == value) 
        {
            return true; 
        }
    }
    return false;
}

int main() 
{
    int userValues[ARRAY_SIZE];
    int count = 0;
    cout << "Enter 15 positive integer values:\n";
    while (count < ARRAY_SIZE) 
    {
        int newValue;
        cout << "Enter value #" << (count + 1) << ": ";
        cin >> newValue;
        
        if (newValue > 0 && !valueExists(userValues, count, newValue)) 
        {
            userValues[count] = newValue;
            count++;
        } 
		else if (newValue > 0) 
          {
            cout << "Sorry: Value Already Exist\n";
        } 
		else 
		{
            cout << "Please enter a positive integer.\n";
        }
    }

    cout << "Values stored in the array:\n";
    for (int i = 0; i < ARRAY_SIZE; ++i) 
	{
        cout << userValues[i] << " ";
    }

    return 0;
}

