#include <iostream>
using namespace std;
int main() 
{
    string cars[] = {"Volvo", "Bmw", "Ford", "Mazda", "Tesla"};
    cout << "Enter a number between 1 and 5: ";
    int userNumber;
    cin >> userNumber;
    cout << "Selected car: " << cars[userNumber - 1] << endl;
}
















//#include<iostream>
//using namespace std;
//int main()
//{
//	int i;
//	string cars[5] = {"volvo","Bmw","Ford","Mazda","Tesla"};
//	cout<<"Enter your number you want to get value of";
//	cin>>i;
//	for(;i<5;i++){
//	cout<<cars[i]<<endl;
//	}
//}
