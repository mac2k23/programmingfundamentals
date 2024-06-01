#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const int maxSize = 100; 
    char userName[maxSize];

    cout << "Enter your name: ";
    cin.getline(userName, maxSize);

    int length = strlen(userName);

    cout << "Reverse of \"" << userName << "\" is: ";
    for (int i = length - 1; i >= 0; --i) {
        cout << userName[i];
    }

    cout << endl;

    return 0;
}

