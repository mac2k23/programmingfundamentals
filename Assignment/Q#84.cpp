#include <iostream>
using namespace std;
float calculateTotal(float price, int quantity) 
{
    float total = price * quantity;
    return total;
}

int main() 
{
    float price = 5.99;
    int quantity = 5;
    float totalCost = calculateTotal(price, quantity);
    cout << "Total cost: $" << totalCost << endl;

    return 0;
}

