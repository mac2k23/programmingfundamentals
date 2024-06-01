#include <iostream>
using namespace std;

int main() {
    int int1, int2;
    double dec;
    char ch;

    // Scenario a
    cout << "Enter values for int1, ch, int2, and dec (a): ";
    cin >> int1 >> ch >> int2 >> dec;
    cout << "Scenario a: int1=" << int1 << ", ch=" << ch << ", int2=" << int2 << ", dec=" << dec << endl;


    // Scenario b
    cout << "Enter values for int1, ch, int2, and dec (b): ";
    cin >> int1 >> ch >> int2 >> dec;
    cout << "Scenario b: int1=" << int1 << ", ch=" << ch << ", int2=" << int2 << ", dec=" << dec << endl;


    // Scenario c
    cout << "Enter values for int1, ch, int2, and dec (c): ";
    cin >> int1 >> ch >> dec >> int2;
    cout << "Scenario c: int1=" << int1 << ", ch=" << ch << ", dec=" << dec << ", int2=" << int2 << endl;

    return 0;
}

