#include<iostream>
using namespace std;
int main()
{
	int range;
	cout<<"Enter desired number of values to print Fabinacci series: ";
	cin>>range;
	int first=0;
	int second=1;
	int i=1;
	while(i<=range)
	{
		cout<<first<<" ";
		int next=first+second;
		first=second;
		second=next;
		i++;
	}
	if(range=second)
	{
		cout<<"It exist in fabinacci series";
	}
	else
	{
		cout<<"It is not exist in fabinacci series";
	}
}
