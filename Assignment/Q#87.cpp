#include <iostream>
using namespace std;
float calculateCost(float pricePerUnit, int quantity, float discountPercentage = 0.0) 
{
    float totalCost = pricePerUnit * quantity * (1.0 - discountPercentage / 100.0);
    return totalCost;
}

int main() 
{
    float price = 10.0;
    int quantity = 5;
    float discount = 20.0;

    float cost = calculateCost(price, quantity, discount);

    cout << "Total Cost: $" << cost << endl;

    return 0;
}

