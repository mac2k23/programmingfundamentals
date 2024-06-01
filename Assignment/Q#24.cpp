#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Enter the value for a: ";
    cin >> a;
    cout << "Enter the value for b: ";
    cin >> b;
    cout << "Enter the value for c: ";
    cin >> c;
    int x = 30 * (a * a + c * c * c * c - b * b * b);
    cout << "The value of x is: " << x << endl;
    return 0;
}

