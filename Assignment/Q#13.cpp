#include<iostream>
#include<iomanip>
using namespace std;
int main() 
{
    double num1=30.0;
    double num2=10000.0;
    double pi=3.1416;

    cout<<fixed<<setprecision(3)<<num1<<setw(10)<<setprecision(0)<<num2<<setw(10)<<setprecision(4)<<pi;
    cout<<endl;

    cout<<setprecision(0)<<num1<<setw(10)<<setprecision(0)<<num2<<setw(10)<<setprecision(4)<<pi;
    cout<<endl;

    return 0;
}

