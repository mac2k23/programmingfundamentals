#include <iostream>
using namespace std;

int main() 
{
    int number;
    for (int i = 0; i < 5; ++i) 
	{
        cout << "Enter a number between 1 and 30: ";
        cin >> number;
        for (int j = 0; j < number; ++j) 
		{
            cout << '*';
        }
        cout << endl;
    }
    return 0;
}
//PART 1: Write a program that reads five numbers (each between 1 and 30). Assume that the user enters
// only valid values. For each number that is read, your program should print a line containing that 
//number of adjacent asterisks. For example, if your program reads the number 7, it should print 
//*******.
//PART 2: Write a program in C++. In this program you have to declare an array of type integer of size
// n (Given by the user as an input). Populate this array with user input values. After this you have 
//to take key element as input and then find how many times this key value occurs in this array.

