#include<iostream>
using namespace std;
int main()
{
	char ch,a,e,i,o,u;
	cout<<"Enter a character "<<endl;
	cin>>ch;
	if ( ch=='a' || ch== 'e' || ch=='i' || ch=='o' || ch=='u')
	{
		cout<<"Entered character is Vowel";
	}
	else	{
		cout<<"Invalid Character";
	}
}
