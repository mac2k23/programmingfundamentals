#include <iostream>
using namespace std;

const int SIZE = 3;

void addMatrices(const int matrix1[][SIZE], const int matrix2[][SIZE], int result[][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void displayMatrix(const int matrix[][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix1[SIZE][SIZE], matrix2[SIZE][SIZE], resultMatrix[SIZE][SIZE];

    cout << "Enter elements for the first matrix (3x3):\n";
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << "Enter element at position (" << i + 1 << ", " << j + 1 << "): ";
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter elements for the second matrix (3x3):\n";
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << "Enter element at position (" << i + 1 << ", " << j + 1 << "): ";
            cin >> matrix2[i][j];
        }
    }

    addMatrices(matrix1, matrix2, resultMatrix);

    cout << "\nResultant Matrix (Sum of the two matrices):\n";
    displayMatrix(resultMatrix);

    return 0;
}

