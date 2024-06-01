#include<iostream>
using namespace std;
int main()
{
	int rows;
    cout << "Enter the number of rows for the pyramid: ";
    cin >> rows;
    while (rows <= 0) {
        cout << "Please enter a positive integer: ";
        cin >> rows;
    }

    int i = 1;
    do {
        for (int j = 0; j < rows - i; ++j) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i - 1; ++j) {
            cout << "*";
        }
        cout << endl;
        ++i;

    } while (i <= rows);
}
