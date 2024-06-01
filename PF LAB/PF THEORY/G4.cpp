#include <iostream>
using namespace std;
int x;
void summer(int& a, int b)
{
	int num1;
	num1 = b + 12;
	a = 2 * b + 5;
	b = num1 + 4;
}
int main()
{
	int x = 2;
	int y = 5;
	x = 6;
	summer(x,y);
	cout << x << " " << y << " " << x << endl;
	return 0;
}
