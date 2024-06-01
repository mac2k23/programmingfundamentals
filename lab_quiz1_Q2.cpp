#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<=100;i=i+3)
	{
		if(i%2==0)
		{
			cout<<"-"<<i;
		}
		else
		{
			cout<<i;
		}
	}
}
