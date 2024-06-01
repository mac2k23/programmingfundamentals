#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	cout<<"Enter first number: ";
	cin>>num1;
	cout<<"Enter second number: ";
	cin>>num2;
	
	if(num1>num2)
	{
		cout<<"First Number is Greater";
	}
	else if(num1<num2)
	{
		cout<<"First Number is Smaller";
	}
	else
	{
		cout<<"They are Equal"; 
	}
}
