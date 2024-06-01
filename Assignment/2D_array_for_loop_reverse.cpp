#include<iostream>
using namespace std;
int main()
{
	int a[2][3]={{1,2,3},{4,5,6}};
	
	for (int i=2; i>=0; i--)
	{
		for ( int j=3; j>=0; j--)
		{
			cout<<a[i][j]<<endl;
		}
	}
}
