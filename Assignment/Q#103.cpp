#include <iostream>
using namespace std;

int main() {
    const int rows = 4;
    const int columns = 2;
    int arr[rows][columns] = {{3, 8}, {1, 7}, {5, 12}, {9, 4}};
    int minValue = arr[0][0];
    int maxValue = arr[0][0];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            if (arr[i][j] < minValue) {
                minValue = arr[i][j];
            }
            if (arr[i][j] > maxValue) {
                maxValue = arr[i][j];
            }
        }
    }
    cout << "Minimum value: " << minValue << endl;
    cout << "Maximum value: " << maxValue << endl;

    return 0;
}

