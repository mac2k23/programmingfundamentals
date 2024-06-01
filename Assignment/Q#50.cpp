#include <iostream>

using namespace std;

int main() {
    int angle1, angle2, angle3;

    cout << "Enter the first angle: ";
    cin >> angle1;

    cout << "Enter the second angle: ";
    cin >> angle2;

    cout << "Enter the third angle: ";
    cin >> angle3;

    int sum = angle1 + angle2 + angle3;

    if (sum == 180) 
	{
        if (angle1 < 90 && angle2 < 90 && angle3 < 90) 
		{
            cout << "Acute triangle" << endl;
        } 
		else if (angle1 > 90 || angle2 > 90 || angle3 > 90) 
		{
            cout << "Obtuse triangle" << endl;
        } 
		else if (angle1 == 90 || angle2 == 90 || angle3 == 90) 
		{
            cout << "Right triangle" << endl;
        }
    } 
	else 
	{
        cout << "Invalid triangle (Sum of angles not equal to 180)" << endl;
    }

    return 0;
}

