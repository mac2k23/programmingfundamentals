#include <iostream>
using namespace std;
int main() 
{
    int numRows;
    cout << "Input number of rows: ";
    cin >> numRows;

    int currentValue = 1;

    for (int i = 1; i <= numRows; ++i) 
    {
        for (int j = 1; j <= i; ++j) 
        {
            cout << currentValue << " ";
            ++currentValue;
        }

        cout << endl;
    }

    return 0;  
}

