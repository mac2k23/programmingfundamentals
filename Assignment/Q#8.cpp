#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	for (int i=1;i<=5;i++)
	{
		cout<<setfill('*');
		cout<<setw(i);
		cout<<'\n';
	}
}
