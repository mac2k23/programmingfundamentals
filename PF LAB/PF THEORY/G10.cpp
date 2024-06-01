


#include <iostream>
#include <string>

using namespace std;

struct Employee 
{
    int id;
    string name;
    double salary;
};

int main() 
{
    Employee emp1, emp2, emp3;

    cout << "Enter details for Employee 1:" << endl;
    cout << "ID: ";
    cin >> emp1.id;
    cout << "Name: ";
    cin.ignore();
    getline(cin, emp1.name);
    cout << "Salary: ";
    cin >> emp1.salary;

    cout << "\nEnter details for Employee 2:" << endl;
    cout << "ID: ";
    cin >> emp2.id;
    cout << "Name: ";
    cin.ignore();
    getline(cin, emp2.name);
    cout << "Salary: ";
    cin >> emp2.salary;

    cout << "\nEnter details for Employee 3:" << endl;
    cout << "ID: ";
    cin >> emp3.id;
    cout << "Name: ";
    cin.ignore();
    getline(cin, emp3.name);
    cout << "Salary: ";
    cin >> emp3.salary;
                 
    Employee maxSalaryEmployee = (emp1.salary > emp2.salary) ? (emp1.salary > emp3.salary ? emp1 : emp3) : (emp2.salary > emp3.salary ? emp2 : emp3);

    cout << "\nEmployee with the maximum salary:" << endl;
    cout << "ID: " << maxSalaryEmployee.id << endl;
    cout << "Name: " << maxSalaryEmployee.name << endl;
    cout << "Salary: " << maxSalaryEmployee.salary << endl;

    return 0;
}

