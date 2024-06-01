#include <iostream>
using namespace std;
int main() 
{
    int numRows;
    char startChar;
    
    cout << "Input number of rows: ";
    cin >> numRows;
    
    char ch = 'A';

    for (int i = 1; i <= numRows; ++i) 
    {
        for (int j = 1; j <= i; ++j) 
        {
            cout << ch << " ";
            ch++;
        }

        cout << endl;
    }

    return 0;
}

