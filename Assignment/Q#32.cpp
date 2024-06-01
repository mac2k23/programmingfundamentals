#include <iostream>
using namespace std;

int main() {
    int int1, int2;
    double dec1, dec2;

    // Input data: 56.50 67 48 62.72
    cout << "Enter values for dec1, int1, int2, and dec2: ";

    // Scenario a
    cin >> dec1 >> int1 >> int2 >> dec2;
    cout << "Scenario a: dec1=" << dec1 << ", int1=" << int1 << ", int2=" << int2 << ", dec2=" << dec2 << endl;


    // Scenario b
    cin >> int1 >> dec1 >> dec2 >> int1;
    cout << "Scenario b: int1=" << int1 << ", dec1=" << dec1 << ", dec2=" << dec2 << ", int1=" << int1 << endl;


    // Scenario c
    cin >> dec1 >> dec2 >> int1 >> int2;
    cout << "Scenario c: dec1=" << dec1 << ", dec2=" << dec2 << ", int1=" << int1 << ", int2=" << int2 << endl;

    // Scenario d
    cin >> int1 >> dec1 >> int2 >> dec2;
    cout << "Scenario d: int1=" << int1 << ", dec1=" << dec1 << ", int2=" << int2 << ", dec2=" << dec2 << endl;

    // Scenario e
    cin >> int1 >> int2 >> dec1 >> dec2;
    cout << "Scenario e: int1=" << int1 << ", int2=" << int2 << ", dec1=" << dec1 << ", dec2=" << dec2 << endl;

    return 0;
}

