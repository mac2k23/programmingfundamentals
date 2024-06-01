#include<iostream>
using namespace std;
int main()
{
	char inCh;
	cout<<"Enter an Alphabet: ";
	cin>>inCh;
	
	if(inCh>=65 && inCh<=90 || inCh>=97 && inCh<=122)
	{
		cout<<"You Entered an Alphabet";
	}
	else
	{
		cout<<"You Entered a Character not Alphabet";
	}
}
