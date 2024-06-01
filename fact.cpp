#include<iostream>
using namespace std;

int factorial(int m)
{
	int fact=1;
	for(int i=1; i<=m; i++)
	{
		fact=fact*i;
	}
	return fact;
}	

int main()
{
	int n;
	cout<<"Enter a number for factorial: ";
	cin>>n;
	cout<<factorial(n);
}
