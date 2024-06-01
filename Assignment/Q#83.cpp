#include <iostream>
#include <cstring>
using namespace std;
int main() 
{
    const int MAX_LENGTH = 100;
    char string1[MAX_LENGTH], string2[MAX_LENGTH];

    cout << "Enter the first string: ";
    cin.getline(string1, MAX_LENGTH);
    cout << "Enter the second string: ";
    cin.getline(string2, MAX_LENGTH);

    char concatenatedString[MAX_LENGTH * 2];
    strcpy(concatenatedString, string1);
    strcat(concatenatedString, string2);

    int lengthString1 = strlen(string1);
    int lengthString2 = strlen(string2);

    int comparisonResult = strcmp(string1, string2);

    cout << "Concatenated string: " << concatenatedString << endl;
    cout << "Length of the first string: " << lengthString1 << endl;
    cout << "Length of the second string: " << lengthString2 << endl;

    if (comparisonResult == 0) 
    {
        cout << "The strings are equal." << endl;
    } 
    else 
    {
        cout << "The strings are not equal." << endl;
    }

    return 0;
}

