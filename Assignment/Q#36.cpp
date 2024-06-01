#include <iostream>
using namespace std;

int main() {
    int num;
    char discard;

    // Scenario a
    cout << "Scenario a: ";
    cin.get(discard);
    cin >> num;
    cout << "num = " << num << ", discard = " << discard << endl;

//    // Clear the newline character from the buffer
//    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Scenario b
    cout << "Scenario b: ";
    discard = cin.peek();
    cin >> num;
    cout << "num = " << num << ", discard = " << discard << endl;


    // Scenario c
    cout << "Scenario c: ";
    cin.get(discard);
    cin.putback(discard);
    cin >> discard;
    cin >> num;
    cout << "num = " << num << ", discard = " << discard << endl;

    return 0;
}

