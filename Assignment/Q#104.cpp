#include <iostream>
using namespace std;

const int NUM_CITIES = 2;
const int NUM_DAYS = 7;

int main() {
    int temperatures[NUM_CITIES][NUM_DAYS];

    for (int city = 0; city < NUM_CITIES; ++city) {
        cout << "Enter temperatures for City " << city + 1 << " for the week:\n";
        for (int day = 0; day < NUM_DAYS; ++day) {
            cout << "Day " << day + 1 << ": ";
            cin >> temperatures[city][day];
        }
    }

    cout << "\nTemperature data:\n";
    for (int city = 0; city < NUM_CITIES; ++city) {
        cout << "City " << city + 1 << ":\n";
        for (int day = 0; day < NUM_DAYS; ++day) {
            cout << "Day " << day + 1 << ": " << temperatures[city][day] << " degrees\n";
        }
        cout << endl;
    }

    return 0;
}

