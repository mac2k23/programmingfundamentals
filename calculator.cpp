#include<iostream>
using namespace std;
int main()
{
	int num1,num2,ans;
	char s;
	cout<<"Enter first oprand: ";
	cin>>num1;
	cout<<"Enter operator: ";
	cin>>s;
	cout<<"Enter second operand: ";
	cin>>num2;
	if(s=='+')
	{
		cout<<num1+num2;
	}
	else if(s=='-')
	{
		cout<<num1-num2;
	}
	else if(s=='*')
	{
		cout<<num1*num2;
	}
	else if(s=='/')
	{
		cout<<num1/num2;
	}
	else if(s=='%')
	{
		cout<<num1%num2;
	}
	else
	{
		cout<<"You entered a wrong operator";
	}
}
