#include <iostream>  
#include <iomanip>  
#include <locale>  
using namespace std;  
int main()  
{  
    cout.imbue(locale("en_US.utf8"));  
    cout << "Left fill:\n" << left << setfill('*')  
              << setw(12) << -1.23  << '\n'  
              << setw(12) << hex << showbase << 42 << '\n'  
              << setw(12) << put_money(123, true) <<endl;  
   
    cout << "Internal fill:\n" << internal  
              << setw(12) << -1.23  << '\n'  
              << setw(12) << 42 << '\n'  
              << setw(12) << put_money(123, true) <<endl;  
   
    cout << "Right fill:\n" << right  
              << setw(12) << -1.23  << '\n'  
              << setw(12) << 42 << '\n'  
              << setw(12) << put_money(123, true) <<endl;  
}

//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main() 
//{
//    double number = 1.23;
//
//    cout << left << setfill('*') << setw(10) << -number << endl;
//    cout << left << setfill('*') << setw(10) << hex << showbase << 42 << endl;
//    cout << left << setfill('*') << setw(10) << setprecision(2) << fixed << "USD " << number << endl;
//    cout << endl;
//    
//    cout << internal << setfill('*') << setw(10) << -number << endl;
//    cout << internal << setfill('*') << setw(10) << hex << showbase << 42 << endl;
//    cout << internal << setfill('*') << setw(10) << setprecision(2) << fixed << "USD " << number << endl;
//    cout << endl;
//    
//    cout << right << setfill('*') << setw(10) << -number << endl;
//    cout << right << setfill('*') << setw(10) << hex << showbase << 42 << endl;
//    cout << right << setfill('*') << setw(10) << setprecision(2) << fixed << "USD " << number << endl;
//}

