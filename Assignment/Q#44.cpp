#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter a number ";
	cin>>num;
	
	if(num>0)
	{
		cout<<"You enter a Positive number";
	}
	else if(num<0)
	{
		cout<<"You enter a Negative number";
	}
	else
	{
		cout<<"You Entered 0";
	}
}
