#include <iostream>
using namespace std;
int globalVariable = 10;
void demonstrateScopes() 
{
    int globalVariable = 5;

    cout << "Local variable within function: " << globalVariable << endl;  // Used cout without std::
}

int main() 
{
    cout << "Global variable in main function: " << globalVariable << endl;

    demonstrateScopes();

    cout << "Global variable in main function after function call: " << globalVariable << endl;

    return 0;
}

