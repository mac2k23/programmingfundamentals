#include<iostream>
using namespace std;
int main()
{
	int start=5,end;
//	cout<<"Enter first number";
//	cin>>start;
	cout<<"Enter last number";
	cin>>end;
	end=end+5;
	while (start<end)
	{
		cout<<start<<endl;
		start++;
	}
}
