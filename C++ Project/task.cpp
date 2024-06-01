#include<iostream>
#include<fstream>
using namespace std;
string name[3],university_name[3],program[3],courses[3],cnic[3],semester[3];
	int age[3],roll_no[3];
int main()
{
	
	ifstream infile("text.txt");
//	if(infile.is_open()){
//		for(int i=0;i<1;i++){
//		infile>>name[i]>>age[i]>>cnic[i]>>university_name[i]>>semester[i]>>roll_no[i]>>program[i]>>courses[i];
//	}
//	}else{
//		cout<<"Error opening file\n";
//	}
//	for(int i=0;i<1;i++){
//		cout<<name[i];
//	}
	for(int i=0; i<1; i++)
	{
		cout<< "Enter your name: "<<endl;
	getline(cin, name[i]);
	cout<< "Enter your age: "<<endl;
	cin>>age[i];
	cout<< "Enter your CNIC: "<<endl;
	cin>>cnic[i];
	cout<< "Enter university name: "<<endl;
	cin.ignore();
	getline(cin, university_name[i]);
	cout<< "Enter your semester no: "<<endl;
	cin>>semester[i];
	cout<< "Enter your roll no: "<<endl;
	cin>>roll_no[i];
	cout<< "Your program: "<<endl;
	cin>>program[i];
	cout<< "Your courses: "<<endl;
	cin.ignore();
	getline(cin, courses[i]);
	
	}
	ofstream outfile("text.txt",ios::app);
	for(int i=0;i<1;i++){
	outfile<<name[i]<<endl;
	outfile<<age[i]<<endl;
	outfile<<cnic[i]<<endl;
	outfile<<university_name[i]<<endl;
	outfile<<semester[i]<<endl;
	outfile<<roll_no[i]<<endl;
	outfile<<program[i]<<endl;
	outfile<<courses[i];
	}
	
	
}

