#include <iostream>
using namespace std;
int main() 
{
    int numRows;
    cout << "Input number of rows: ";
    cin >> numRows;

    for (int i = 1; i <= numRows; ++i) 
   {
        for (int space = 1; space <= numRows - i; ++space) 
        {
            cout << " ";
        }

        for (int j = 1; j <= i; ++j) 
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;  
}

