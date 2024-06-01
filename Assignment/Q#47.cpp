#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	
	if(num%2==0 && num%3==0)
	{
		cout<<"You Entered a Number is Divisible by both 2 and 3";
	}
	else 
	{
		cout<<"You Entered a Number is Indivisible by both 2 and 3";
	}
}
