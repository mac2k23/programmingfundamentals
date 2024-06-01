#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int num=24;
    cout<<"-"<<setw(4)<<right<<num<<endl;
	cout<<-num<<endl;
    cout<<setw(5)<<right<<-num<<endl;
}
