#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	
	if(num>=10&&num<=20)
	{
		cout<<"You Entered a Number Between 10 to 20";
	}
	else if(num>=30&&num<=40)
	{
		cout<<"You Entered a Number Between 30 to 40";
	}
	else
	{
		cout<<"Other Range"; 
	}
}
