#include <iostream>
using namespace std;
const int NUM = 10;
const double X = 20.5;
int main()
{
int firstNum, secondNum;
double z;
char grade;
firstNum = 62;
cout << "firstNum = " << firstNum << endl;
cout << "Enter three numbers: ";
cin >> firstNum >> z >> secondNum;
cout << endl;
cout << "The numbers you entered are "
<< firstNum << ", " << z << ", and "
<< secondNum << endl;
z = z - X + 2 * firstNum - secondNum;
cout << "z = " << z << endl;
cout << "Enter grade: ";
cin >> grade;
cout << endl;
cout << "The letter that follows your grade is: "
<< static_cast<char>(static_cast<int>(grade) + 1)
<< endl;
return 0;
}
