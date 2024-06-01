#include <iostream>
#include <cstring>
using namespace std;

int countCharacter( char str[], char ch) {
    int count = 0;
    int length = strlen(str);

    for (int i = 0; i < length; ++i) {
        if (str[i] == ch) {
            count++;
        }
    }

    return count;
}

int main() {
     int maxSize = 100; 
    char userString[maxSize];
    char searchChar;

    cout << "Enter a string: ";
    cin.getline(userString, maxSize);

    cout << "Enter a character to search: ";
    cin >> searchChar;

    int charCount = countCharacter(userString, searchChar);

    cout << "The character '" << searchChar << "' is repeated " << charCount << " times in the string." << endl;

    return 0;
}

