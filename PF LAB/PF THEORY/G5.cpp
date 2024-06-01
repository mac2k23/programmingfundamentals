#include<iostream>
using namespace std;
int main ()
{
	int list[] = {6, 8, 2, 14, 13};
	for ( int i = 0 ; i < 4 ; i++ )
	{
		list[i] = list[i] - list[i+1];
	}
	for ( int i = 0 ; i < 5 ; i++ )
	{
		cout << i << " " << list[i] << endl;
	}
}
