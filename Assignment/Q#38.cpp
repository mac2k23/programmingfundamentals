#include <iostream>
using namespace std;

int main() {
    int a = 25, b = 20;
    double c = 5.0;

    // a.
    cout << "a. " << a * 2 * b << endl;

    // b.
    cout << "b. " << a + b / 2.0 + 1.5 * c << endl;

    // c.
    cout << "c. " << a / static_cast<double>(b) << endl;

    // d.
    cout << "d. " << 62 % 28 + a / c << endl;

    // e.
    cout << "e. " << static_cast<int>(c) % 3 + 7 << endl;

    // f.
    cout << "f. " << 22.5 / 2 + 14.0 * 3.5 + 28 << endl;

    // g.
    cout << "g. " << 2 / (c - static_cast<int>(c + 1.2)) << endl;

    return 0;
}

