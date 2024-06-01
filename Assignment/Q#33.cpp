#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    char ch;

    // Input: 78 86 18 #42 &
    cout << "Enter values for x, y, z, and ch: ";

    // Scenario a
    cin >> x >> y >> z >> ch;
    cout << "Scenario a: x=" << x << ", y=" << y << ", z=" << z << ", ch=" << ch << endl;


    // Scenario b
    cin >> ch >> x >> y >> z;
    cout << "Scenario b: x=" << x << ", y=" << y << ", z=" << z << ", ch=" << ch << endl;


    // Scenario c
    cin >> x;
    cin.get(ch);
    cin >> y >> z;
    cout << "Scenario c: x=" << x << ", y=" << y << ", z=" << z << ", ch=" << ch << endl;

    // Scenario d
    cin >> x >> ch >> y >> z;
    cout << "Scenario d: x=" << x << ", y=" << y << ", z=" << z << ", ch=" << ch << endl;

    // Scenario e
    cin.get(ch);
    cin >> x >> y >> z;
    cout << "Scenario e: x=" << x << ", y=" << y << ", z=" << z << ", ch=" << ch << endl;

    return 0;
}

