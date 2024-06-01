#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	double num=1.23e+09;
    cout<<"Without fixed flag: "<<num<<endl;
    cout<<fixed<<setprecision(5)<<"With fixed flag: "<<num<<endl;
}
