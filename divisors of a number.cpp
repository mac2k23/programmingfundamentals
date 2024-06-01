#include <iostream>

using namespace std;

int main() {
    int number;

    // Input a number from the user
    cout << "Enter a number: ";
    cin >> number;

    // Display divisors
    cout << "Divisors of " << number << " are: ";
    for (int i = 1; i <= number; ++i) {
        if (number % i == 0) {
            cout << i << " ";
        }
    }

    return 0;
}

