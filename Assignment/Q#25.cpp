#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    cout << "Enter the value for a: ";
    cin >> a;
    cout << "Enter the value for b: ";
    cin >> b;
    cout << "Enter the value for c: ";
    cin >> c;
    cout << "Enter the value for d: ";
    cin >> d;
    int y = (d * ((a * b * b * b + c) - 20)) / ((a - b) * c);
    cout << "The value of y is: " << y << endl;

    return 0;
}

