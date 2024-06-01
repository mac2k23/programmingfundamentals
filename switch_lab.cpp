#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	n=n/10;
	switch (n){
		case 9:
		cout<<"A+";
		break;
	case 8:
		cout<<"A";
		break;
	case 7:
		cout<<"B";
		break;
	default:
		cout<<"Fail";
	}
}
