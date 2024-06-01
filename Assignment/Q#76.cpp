#include <iostream>
using namespace std;
int main() 
{
    int numRows;
    cout << "Input number of rows: ";
    cin >> numRows;

    for (int i = numRows; i >= 1; --i) 
    {
        for (int j = 1; j <= i; ++j) 
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;  
}

