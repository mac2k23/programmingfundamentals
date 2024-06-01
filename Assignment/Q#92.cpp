#include <iostream>
using namespace std;
void countMeStatic() 
{
    static int callCount = 0;
    callCount++;
    cout << "Function has been called " << callCount << " time"<<((callCount==1)? ".":"s.") << endl;
}

int main() 
{
    countMeStatic();
    countMeStatic();
    countMeStatic();

    return 0;
}

