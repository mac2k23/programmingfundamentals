#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

int calculateDiagonalSum(const int matrix[][MAX_SIZE], int size) 
{
    int sum = 0;

    for (int i = 0; i < size; ++i) 
	{
        sum += matrix[i][i]; 
    }

    return sum;
}
//a25762488@gmail.com
int main() {

    int matrix[MAX_SIZE][MAX_SIZE];
    int size;

    cout << "Enter the size of the square matrix: ";
    cin >> size;

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < size; ++i) 
	{
        for (int j = 0; j < size; ++j) 
		{
            cout << "Element at position (" << i + 1 << ", " << j + 1 << "): ";
            cin >> matrix[i][j];
        }
    }

    int diagonalSum = calculateDiagonalSum(matrix, size);

    cout << "Sum of elements in the main diagonal: " << diagonalSum << endl;

    return 0;
}

