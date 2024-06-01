#include <iostream>
using namespace std;

int main() {
    const int rows = 2;
    const int columns = 3;
    int arr[rows][columns] = {{1, 2, 3}, {4, 5, 6}};

    cout << "Values of the 2D array:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

