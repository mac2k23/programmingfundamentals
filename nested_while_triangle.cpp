#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter a number";
	cin>>num;
	int i=num;
	while (i>=1)
	{
		int inner=1;
		while(inner<=i)
		{
			cout<<i;
			inner++;
		}
		cout<<endl;
		i--;
	}
}
