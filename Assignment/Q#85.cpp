#include <iostream>
using namespace std;
void swapNumbers(int& a, int& b) 
{
    int temp = a;
    a = b;
    b = temp;
}

int main() 
{
    int num1, num2;

    cout << "Enter the first integer: ";
    cin >> num1;

    cout << "Enter the second integer: ";
    cin >> num2;

    cout << "Original values: num1 = " << num1 << ", num2 = " << num2 << endl;

    swapNumbers(num1, num2);

    cout << "Swapped values: num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
} 

