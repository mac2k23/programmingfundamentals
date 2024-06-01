#include<iostream>
#include<cmath>
using namespace std;
int power(int base, int exponent)
{
	return pow(base, exponent);
}
int main()
{
	int base;
	int exponent;
	cout << "Enter base: ";
	cin >> base;
	cout << "Eter exponent: ";
	cin >> exponent;
	int result = pow(base, exponent);
	cout << "Result is: " << result  <<endl;
	return 0;
}
