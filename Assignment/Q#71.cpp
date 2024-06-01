#include <iostream>
using namespace std;
int main() 
{
    int frequency[10] = {0};
    long long num;
    cout << "Enter an integer: ";
    cin >> num;

    if (num < 0) 
    {
        cout << "Please enter a non-negative integer." << endl;
        return 1; 
    }

    while (num > 0) 
    {
        int digit = num % 10;
        frequency[digit]++;
        num /= 10;
    }

    cout << "Digit frequencies:" << endl;
    for (int i = 0; i < 10; ++i) 
    {
        cout << "Digit " << i << ": " << frequency[i] << " times" << endl;
    }

    return 0;  
}


