#include<iostream>
using namespace std;
inline float add(float a, float b) 
{
    return a + b;
}

inline float subtract(float a, float b) 
{
    return a - b;
}

inline float multiply(float a, float b) 
{
    return a * b;
}

inline float divide(float a, float b) 
{
    return (b != 0) ? (a / b) : 0;
}

int main() 
{
    float num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    float result_add = add(num1, num2);
    float result_subtract = subtract(num1, num2);
    float result_multiply = multiply(num1, num2);
    float result_divide = divide(num1, num2);

    cout << "Addition: " << result_add << endl;
    cout << "Subtraction: " << result_subtract << endl;
    cout << "Multiplication: " << result_multiply << endl;
    cout << "Division: " << result_divide << endl;

    return 0;
}

