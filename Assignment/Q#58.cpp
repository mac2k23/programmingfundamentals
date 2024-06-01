#include <iostream>

using namespace std;

int main() 
{
    const int admissionFee = 20000;
    const int miscellaneousFee = 7500;
    const int maxSemesterFee = 100000;
    const double taxRate = 0.05;

    int semesterNumber, creditHours;
    double scholarshipPercentage;

    cout << "Enter the semester number: ";
    cin >> semesterNumber;

    cout << "Enter the number of credit hours: ";
    cin >> creditHours;

    cout << "Enter the scholarship percentage (0 to 100): ";
    cin >> scholarshipPercentage;

    double tuitionFee = creditHours * 9600 * (1 - scholarshipPercentage / 100);

    double totalSemesterFee;

    if (semesterNumber == 1) 
	{
        totalSemesterFee = tuitionFee + admissionFee + miscellaneousFee;
    } 
	else 
	{
        totalSemesterFee = tuitionFee + miscellaneousFee;
    }

    if (totalSemesterFee > maxSemesterFee) 
	{
        totalSemesterFee += totalSemesterFee * taxRate;
    }

    cout << "Total Semester Fee: Rs. " << totalSemesterFee << endl;

    return 0;
}

