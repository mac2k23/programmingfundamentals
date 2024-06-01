#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }

    for (int i = 2; i <= sqrt(number); ++i) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    const int maxPrimes = 10;
    int primeNumbers[maxPrimes];
    int count = 0;

    cout << "Enter positive integers. The program will store prime numbers and stop after storing 10." << endl;

    while (count < maxPrimes) {
        int userInput;
        cout << "Enter a number: ";
        cin >> userInput;

        if (isPrime(userInput)) {
            primeNumbers[count] = userInput;
            ++count;
        }
    }

    cout << "\nPrime numbers stored in the array:" << endl;
    for (int i = 0; i < maxPrimes; ++i) {
        cout << primeNumbers[i] << " ";
    }

    return 0;
}

