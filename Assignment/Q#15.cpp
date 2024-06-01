#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int z=-24;
	cout.width(6);
	cout<<internal<<z<<endl;
	
	cout.width(6);
	cout<<left<<z<<endl;
	
	cout.width(6);
	cout<<right<<z<<endl;
}

//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main() 
//{
//    int num=24;
//
//    cout<<num<<endl;
//    cout<<-num<<endl;
//    cout<<left<<-num<<endl;
//}
