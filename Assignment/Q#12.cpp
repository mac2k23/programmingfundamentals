#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double pi=3.14159, year=2006, value=1e-10;
	
	cout<<"Default:"<<endl;
	cout<<pi<<endl;
	cout<<year<<endl;
	cout<<value<<endl;
	cout<<endl;
	cout<<"Fixed:"<<endl;
	cout<<fixed<<pi<<setprecision(5)<<endl;
	cout<<fixed<<year<<setprecision(5)<<endl;
	cout<<fixed<<value<<setprecision(5)<<endl;
	cout<<endl;
	cout<<"Scientific:"<<endl;
	cout<<scientific<<pi<<endl;
	cout<<scientific<<year<<endl;
	cout<<scientific<<value<<endl;
	
	return 0;
}
