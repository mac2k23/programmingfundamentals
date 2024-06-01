#include <iostream>
using namespace std;
int main() 
{
    if (4 * 7 == 74 / 3) {
        cout << "a. True" << endl;
    } else {
        cout << "a. False" << endl;
    }

    if (4 + 7 / 2 <= 9 - 15 % 6) {
        cout << "b. True" << endl;
    } else {
        cout << "b. False" << endl;
    }

    if ('K' < 'k') {
        cout << "c. True" << endl;
    } else {
        cout << "c. False" << endl;
    }

    if ('+' <= '-') {
        cout << "d. True" << endl;
    } else {
        cout << "d. False" << endl;
    }

    if ('5' <= '6') {
        cout << "e. True" << endl;
    } else {
        cout << "e. False" << endl;
    }

    if (3.9 / 4 - 6 >= 8 - 6.2 * 1.5) {
        cout << "f. True" << endl;
    } else {
        cout << "f. False" << endl;
    }

    return 0;
}

