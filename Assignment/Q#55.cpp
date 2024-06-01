#include<iostream>
using namespace std;
int main()
{
	char inCh;
	cout<<"Enter an Alphabet: ";
	cin>>inCh;
	
	if(inCh>=65 && inCh<=90)
	{
		cout<<"You Entered an Upper Case Letter";
	}
	else if(inCh>=97 && inCh<=122)
	{
		cout<<"You Entered a Lower Casse Letter"; 
	}
	else
	{
		cout<<"You Entered an Invalid Character";
	}
}
