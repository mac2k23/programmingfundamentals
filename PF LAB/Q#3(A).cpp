#include <iostream>
using namespace std;

int fibonacci(int n) 
{
    if (n <= 1) 
	{
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() 
{

    cout << "Fibonacci Series (first 10 terms):" << endl;
    for (int i = 0; i < 10; ++i) 
	{
        cout << fibonacci(i) << " ";
    }

    cout << endl;

    return 0;
}
