#include <iostream>
using namespace std;
void calcTotal( double arrayA[], int arrayB[], double arrayC[], int size) 
{
    for (int i = 0; i < size; ++i) 
    {
        arrayC[i] = arrayA[i] - arrayB[i];
    }
}

int main() 
{
    const int maxSize = 100;
    double arrayA[maxSize];
    int arrayB[maxSize];
    double arrayC[maxSize];

    int size;

    cout << "Enter the size of the arrays: ";
    cin >> size;

    cout << "Enter " << size << " double numbers for array A:\n";
    for (int i = 0; i < size; ++i) 
    {
        cin >> arrayA[i];
    }

    cout << "Enter " << size << " integer numbers for array B:\n";
    for (int i = 0; i < size; ++i) 
    {
        cin >> arrayB[i];
    }

    calcTotal(arrayA, arrayB, arrayC, size);

    cout << "Result array C:\n";
    for (int i = 0; i < size; ++i) 
    {
        cout << arrayC[i] << " ";
    }
    cout << endl;

    return 0;
}

