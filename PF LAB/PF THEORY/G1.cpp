#include<iostream>
using namespace std;
int main()
{
	int num, sum;
	cin >> num;
	sum = num;
	while(num != -1)
	{
		cin >> num;
		sum = sum + num;
	}
	cout << "Sum = " << sum << endl;
}
