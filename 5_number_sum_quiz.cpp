#include<iostream>
using namespace std;
int main()
{
	int num,r,sum=0,count=0;
	cin>>num;
	while(num>0)
	{
		count++;
		r=num%10;
		num=num/10;
		sum=sum+r;
	}
	if(count>=5)
	{
	cout<<sum;
	}
	else
	{
	cout<<"Enter an invalid number";
	}
}
