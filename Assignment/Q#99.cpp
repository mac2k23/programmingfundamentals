#include <iostream>
using namespace std;

int main() {
    const int maxSize = 100; 
    char inputString[maxSize];

    cout << "Enter a string: ";
    cin.getline(inputString, maxSize);

    int length = 0;
    while (inputString[length] != '\0') {
        length++;
    }

    cout << "Length of \"" << inputString << "\" is: " << length << endl;

    return 0;
}

