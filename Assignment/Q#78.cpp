#include <iostream>
using namespace std;
int main() 
{
    int numRows;
    cout << "Input number of rows: ";
    cin >> numRows;

    for (int i = 1; i <= numRows; ++i) 
    {
        for (int space = 1; space < i; ++space) 
        {
            cout << "  ";
        }

        for (int j = i; j <= numRows; ++j) 
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;  
}

