#include<iostream>
using namespace std;
int main()
{
	float num1,num2;
	double add,sub,mul,div,mod;
	
	cout<<"Enter first number: ";
	cin>>num1;
	
	cout<<"Enter second number: ";
	cin>>num2;
	
	add=num1+num2;
	sub=num1-num2;
	mul=num1*num2;
	div=num1/num2;
	mod=fmod(num1,num2);
	
	cout<<"Sum is: "<<add<<endl;
	cout<<"Difference is: "<<sub<<endl;
	cout<<"Product is: "<<mul<<endl;
	cout<<"Quotient is: "<<div<<endl;
	cout<<"Remainder is: "<<mod<<endl;
}
