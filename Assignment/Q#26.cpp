#include <iostream>

using namespace std;

int main() {
    const double K = 6.67e-8;
    double M1, M2, d;
    cout << "Enter the mass of body 1 (M1): ";
    cin >> M1;
    cout << "Enter the mass of body 2 (M2): ";
    cin >> M2;
    cout << "Enter the distance between the bodies (d): ";
    cin >> d;
    double force = K * (M1 * M2) / (d * d);
    cout << "The force between the bodies is: " << force << " dynes" << endl;

    return 0;
}

