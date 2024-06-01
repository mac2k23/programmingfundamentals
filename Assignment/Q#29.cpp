#include <iostream>

using namespace std;

int main() {
    double x, v, t, a, D;
    cout << "Enter the initial position (x): ";
    cin >> x;

    cout << "Enter the initial velocity (v): ";
    cin >> v;

    cout << "Enter the time (t): ";
    cin >> t;

    cout << "Enter the acceleration (a): ";
    cin >> a;
    D = x + v * t + 0.5 * a * t * t;
    cout << "The value of distance D is: " << D << endl;

    return 0;
}

