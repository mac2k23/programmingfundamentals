#include <iostream>
using namespace std;
int main() 
{
    int sum = 0;
    cout << "First five numbers: ";
    for (int i = 1; i <= 5; ++i) 
    {
        cout << i << " ";
        sum += i;
    }
    cout << "\nSum of the first five numbers: " << sum << endl;

    return 0;
}

