#include <iostream>
using namespace std;
int main() 
{
    int x, y, temp;
    
    cout<<"Enter the value for x: ";
    cin>>x;

    cout<<"Enter the value for y: ";
    cin>>y;
    
    cout<<"Original values:"<<endl;
    cout<<"x: "<<x<<endl;
    cout<<"y: "<<y<<endl;

    temp = x;
       x = y;
       y = temp;
    
    cout<<"After exchange:"<<endl;
    cout<<"x: "<<x<<endl;
    cout<<"y: "<<y<<endl;
}

