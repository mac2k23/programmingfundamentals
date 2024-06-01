#include<iostream>
#include<iomanip>
using namespace std;
int main() 
{
    double num1=192.9864;
    double num2=168.0000;
    double pi=3.141590;

    cout<<fixed<<setprecision(2)<<num1<<endl;
	cout<<fixed<<setprecision(2)<<num2<<endl;
	cout<<fixed<<setprecision(2)<<pi<<endl;
    cout<<endl;

	cout<<fixed<<setprecision(4)<<num1<<endl;
	cout<<fixed<<setprecision(4)<<num2<<endl;
	cout<<fixed<<setprecision(4)<<pi<<endl;
    cout<<endl;
    
    cout<<fixed<<setprecision(6)<<num1<<endl;
	cout<<fixed<<setprecision(6)<<num2<<endl;
	cout<<fixed<<setprecision(6)<<pi<<endl;
    cout<<endl;

    return 0;
}

