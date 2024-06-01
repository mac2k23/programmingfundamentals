#include <iostream>
using namespace std;

double calculateAverage(const int arr[], int size) 
{
    double sum = 0.0;

    for (int i = 0; i < size; ++i) 
	{
        sum += arr[i];
    }

    return (size > 0) ? (sum / size) : 0.0;
}

int main() 
{

    const int maxSize = 100;
    int arr[maxSize];
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; ++i) 
	{
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    double average = calculateAverage(arr, size);

    cout << "Average of the elements: " << average << endl;

    return 0;
}
