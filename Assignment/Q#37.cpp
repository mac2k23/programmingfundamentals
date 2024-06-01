#include <iostream>
using namespace std;

int main() {
    int num1, num2, newNum;
    double x, y;

    // a. Valid assignment
    num1 = 35;

    // b. Invalid assignment (num2 is not initialized)
    // newNum = num1 - num2;

    // c. Valid assignments
    num1 = 5;
    num2 = 2 + num1;
    num1 = num2 / 3;

    // d. Invalid assignment (left side of the assignment should be a variable)
    // num1 * num2 = newNum;

    // e. Valid assignment
    x = 12 * num1 - 15.3;

    // f. Invalid assignment (left side of the assignment should be a variable)
    // num1 * 2 = newNum + num2;

    // g. Invalid assignment (left side of the assignment should be a variable)
    // x / y = x * y;

    // h. Invalid assignment (modulus operator can't be applied to a double)
    // num2 = num1 % 2.0;

    // i. Valid assignment
    newNum = static_cast<int>(x) % 5;

    // j. Valid assignment
    x = x + y - 5;

    // k. Valid assignment
    newNum = num1 + static_cast<int>(4.6 / 2);

    // Output the values
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;
    cout << "newNum: " << newNum << endl;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    return 0;
}

