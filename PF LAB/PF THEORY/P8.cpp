#include<iostream>
using namespace std;
int main()
{
	int size = 2;
	int arr[size][size];
	cout << "Enter values for matrix.\n";
	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < size; j++)
		{
			cout << "Enter value for position " << i + 1 << "x" << j + 1 << " :";
			cin >> arr[i][j];
		}
	}
	
	cout << "\nThe entered array is: \n";
	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < size; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	int sumLeftDiagonal = 0;
	for(int i = 0; i < size; i++)
	{
		sumLeftDiagonal = sumLeftDiagonal + arr[i][i];
	}
	cout << "\The sum of left diagonal is: " << sumLeftDiagonal;
	return 0;
}
