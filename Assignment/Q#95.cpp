#include <iostream>
using namespace std;
int findMin( int arr[], int size) 
{
    if (size == 1) 
    {
        return arr[0];
    }
    int minVal = arr[0];

    for (int i = 1; i < size; ++i) 
    {
        if (arr[i] < minVal) 
        {
            minVal = arr[i];
        }
    }

    return minVal;
}

int main() 
{
     int size;
    cout<<"Enter the size of the Array:";
    cin>>size;
    
     int userArray[size];
    cout << "Enter " << size << " integers:\n";
    for (int i = 0; i < size; ++i) 
    {
        cin >> userArray[i];
    }

    int minValue = findMin(userArray, size);

    cout << "The minimum value in the array is: " << minValue << endl;

    return 0;
}

