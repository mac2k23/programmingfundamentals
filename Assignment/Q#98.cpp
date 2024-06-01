#include <iostream>
using namespace std;

int main() {
    const int rows = 3;
    const int columns = 5;
    int matrix[rows][columns];

    cout << "Enter elements for a 3x5 matrix:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << "Enter element at position (" << i + 1 << ", " << j + 1 << "): ";
            cin >> matrix[i][j];
        }
    }

    cout << "\nMatrix form:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

