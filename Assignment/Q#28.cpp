#include <iostream>
using namespace std;
int main() 
{
    double gpa1, gpa2, gpa3, gpa4, gpa5;
    int credit_hour1, credit_hour2, credit_hour3, credit_hour4, credit_hour5;
    cout << "Enter GPA for Course 1: ";
    cin >> gpa1;
    cout << "Enter Credit Hours for Course 1: ";
    cin >> credit_hour1;

    cout << "Enter GPA for Course 2: ";
    cin >> gpa2;
    cout << "Enter Credit Hours for Course 2: ";
    cin >> credit_hour2;

    cout << "Enter GPA for Course 3: ";
    cin >> gpa3;
    cout << "Enter Credit Hours for Course 3: ";
    cin >> credit_hour3;

    cout << "Enter GPA for Course 4: ";
    cin >> gpa4;
    cout << "Enter Credit Hours for Course 4: ";
    cin >> credit_hour4;

    cout << "Enter GPA for Course 5: ";
    cin >> gpa5;
    cout << "Enter Credit Hours for Course 5: ";
    cin >> credit_hour5;
    double total_earned = (gpa1 * credit_hour1) + (gpa2 * credit_hour2) + (gpa3 * credit_hour3) + (gpa4 * credit_hour4) + (gpa5 * credit_hour5);
    int total_credit_hour = credit_hour1 + credit_hour2 + credit_hour3 + credit_hour4 + credit_hour5;
    double cgpa = total_earned / total_credit_hour;
    cout << "Your CGPA is: " << cgpa << endl;

    return 0;
}

