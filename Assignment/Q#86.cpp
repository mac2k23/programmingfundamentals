#include <iostream>
using namespace std;
float calculateArea(float length, float width) 
{
    return length * width;
}

float calculateArea(float radius) 
{
    return 3.14159 * radius * radius;
}

int main() 
{
    float rectangleLength = 10;
    float rectangleWidth = 5;
    float circleRadius = 7;

    float rectangleArea = calculateArea(rectangleLength, rectangleWidth);
    float circleArea = calculateArea(circleRadius);

    cout << "Area of rectangle: " << rectangleArea << endl;
    cout << "Area of circle: " << circleArea << endl;

    return 0;
}

