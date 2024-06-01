#include<iostream>
using namespace std;
int f(int m)
{
	if(m>1)
	{
		return m*f(m-1);
	}
	else
	{
		return 1;
	}
}

int main()
{
	int n;
	cout<<"Enter a number for factorial: ";
	cin>>n;
	int result;
	result = f(n);
	cout<<result;
}
