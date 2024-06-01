#include <iostream>
#include <cmath>

using namespace std;

bool isPerfectSquare(int num) {
    int sqrtNum = sqrt(num);
    return (sqrtNum * sqrtNum == num);
}

bool isFibonacci(int num) {
    // A number is in Fibonacci series if and only if one of (5 * n^2 + 4) or (5 * n^2 - 4) is a perfect square
    return isPerfectSquare(5 * num * num + 4) || isPerfectSquare(5 * num * num - 4);
}

int main() {
    int userInput;

    cout << "Enter a number to check if it's in the Fibonacci series: ";
    cin >> userInput;

    if (isFibonacci(userInput)) {
        cout << userInput << " is in the Fibonacci series.\n";
    } else {
        cout << userInput << " is not in the Fibonacci series.\n";
    }

    return 0;
}

