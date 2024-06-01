#include <iostream>
using namespace std;

int lastIndexOccurrence( int arr[], int size, int x) {
    int lastIndex = -1; 

    for (int i = 0; i < size; ++i) {
        if (arr[i] == x) {
            lastIndex = i;
        }
    }

    return lastIndex;
}

int main() {
     int maxSize = 100; 
    int A[maxSize];
    int size, x;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter " << size << " integers for the array:\n";
    for (int i = 0; i < size; ++i) {
        cin >> A[i];
    }

    cout << "Enter the integer 'x' to search for: ";
    cin >> x;

    int lastIndex = lastIndexOccurrence(A, size, x);

    if (lastIndex != -1) {
        cout << "The last occurrence of '" << x << "' is at index: " << lastIndex << endl;
    } else {
        cout << "'" << x << "' not found in the array." << endl;
    }

    return 0;
}

