#include <iostream>
using namespace std;
int callCount = 0;
void countMe() 
{
    callCount++;
    cout << "Function has been called " << callCount << " time" << ((callCount == 1) ? "." : "s.") << endl;
}

int main() 
{
    countMe();
    countMe();
    countMe();

    return 0;
}

