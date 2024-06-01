#include <iostream>
using namespace std;
int main()
{
	int age;
	cout << "Enter your age: ";
	cin >> age;
	
	if ( age >= 18 )
	{
		cout << "You'er eligible to vote.";
	}
	else if ( age <= 18 )
	{
		cout << "You'er not eligible to vote.";
	}
	else
	{
		cout << "You entered invalid input.";
	}
}
