#include <iostream>

int main() {
    using namespace std;

    int n;
    cout << "Enter the number of terms in the series: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        int term;

        // Use if-else statement to calculate the term without ternary operator
        if (i % 2 == 0) {
            term = -3 * i;
        } else {
            term = 3 * i + 1;
        }

        cout << term;

        // Add a comma after each term except the last one
        if (i < n) {
            cout << ",";
        }
    }

    cout << endl;

    return 0;
}

