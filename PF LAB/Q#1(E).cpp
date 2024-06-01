#include <iostream>
#include <cctype>
using namespace std;
bool isPalindrome(const string& str) 
{
    string cleanedStr;
    for (char ch : str) 
	{
        if (isalnum(ch)) 
		{
            cleanedStr += tolower(ch);
        }
    }
    int start = 0;
    int end = cleanedStr.length() - 1;
    while (start < end) 
	{
        if (cleanedStr[start] != cleanedStr[end]) 
		{
            return false;
        }
        ++start;
        --end;
    }
    return true; 
}

int main() 
{
    cout << "Enter a string: ";
    string inputString;
    getline(cin, inputString);

    if (isPalindrome(inputString)) 
	{
        cout << "The entered string is a palindrome." << endl;
    } 
	else 
	{
        cout << "The entered string is not a palindrome." << endl;
    }

    return 0;
}

