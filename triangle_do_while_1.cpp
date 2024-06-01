#include<iostream>
using namespace std;
int main()
{
	int n,i=1,in;
	cout<<"Enter a number";
	cin>>n;
	do
	{
		in=1;
		do
		{
			cout<<i;
			in++;
		}while(in<=i);
		cout<<endl;
		i++;
	}while(i<=n);
}
