#include<iostream>
using namespace std;
int funcRet1()
{
	int x = 45;
	return x;
}
int funcRet2()
{
	int a = 2; int b = 3;
	return 2 * a + b;
}
int main()
{
	cout << "The value returned by funcRet1: " << funcRet1() << endl;
	cout << "The value returned by funcRet2: " << funcRet2() << endl;
}
