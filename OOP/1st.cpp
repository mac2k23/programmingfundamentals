#include<iostream>
using namespace std;
class student
{
	private:
		int rollNo;
		string name;
		int physicsM;
		int mathM;
		int chemistryM;
	public:
		student(int r, string n, int p, int m, int c)
		{
			rollNo=r;
			name=n;
			physicsM=p;
			mathM=m;
			chemistryM=c;
		}
		int total()
		{
			return physicsM+mathM+chemistryM;
		}
		char grade()
		{
			float avg=total()/3;
			if (avg>60)
			{
				return 'A';
			}
			else if (avg<60 &&avg>40)
				return 'B';
			else
				return 'C';
		}
};
int main()
{
	int rollNo;
	string name;
	int p,m,c;
	cout<<"Enter your roll no: "<<endl;
	cin>>rollNo;
	cout<<"Enter your name :"<<endl;
	cin>>name;
	cout<<"Enter marks of 3 subjects :"<<endl;
	cin>>p>>m>>c;
	student s(rollNo,name,p,m,c);
	cout<<"Total marks :"<<s.total()<<endl;
	cout<<"Grades are :"<<s.grade()<<endl;
}
