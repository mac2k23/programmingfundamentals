#include <iostream>
using namespace std;

void selectionSort(int arr[], int size) 
{
    for (int i = 0; i < size - 1; ++i) 
	{
        int minIndex = i;
        for (int j = i + 1; j < size; ++j) 
		{
            if (arr[j] < arr[minIndex]) 
			{
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
    }
}

int main() 
{

    int a[] = {125, 0, 695, 3, -256, -5, 214, 44, 55};
    int size = sizeof(a) / sizeof(a[0]);

    cout << "Original Array: ";
    for (int i = 0; i < size; ++i) 
	{
        cout << a[i] << " ";
    }

    selectionSort(a, size);

    cout << "\nSorted Array: ";
    for (int i = 0; i < size; ++i) 
	{
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}

