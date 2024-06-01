#include <iostream>
#include <string>

using namespace std;

int main() {
    double height;
    char ch;
    string name;

    cout << "Enter height and name (scenario a): ";
    cin >> height;
    cin.get(ch);  
    getline(cin, name);

    cout << "Scenario a:\n";
    cout << "Height: " << height << "\n";
    cout << "Char: " << ch << "\n";
    cout << "Name: " << name << "\n\n";

    height = 0.0;
    ch = '\0';
    name = "";

    cout << "Enter height and name (scenario b): ";
    cin >> height;
    cin.get(ch);  
    getline(cin, name);

    cout << "Scenario b:\n";
    cout << "Height: " << height << "\n";
    cout << "Char: " << ch << "\n";
    cout << "Name: " << name << "\n";

    return 0;
}

