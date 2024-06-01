#include<iostream>
using namespace std;
int main()
{
	int num1,num2,divide;
	cout<<"Enter 2 numbers: ";
	cin>>num1>>num2;
	if(num2==0)
	{
		cout<<"Division by zero";
	}
	else
	{
		divide=num1/num2;
		cout<<divide<<endl;
	}
	return 0;
}
