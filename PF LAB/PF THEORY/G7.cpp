#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; ++i) 
	{
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    
    int key;
    cout << "Enter the key element to find: ";
    cin >> key;
    
    int count = 0;
    for (int i = 0; i < n; ++i) 
	{
        if (arr[i] == key) 
		{
            ++count;
        }
    }

    cout << "The key element " << key << " occurs " << count << " times in the array." << endl;

    return 0;
}

