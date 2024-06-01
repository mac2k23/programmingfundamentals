#include <iostream>
using namespace std;

int main() {
    int n = 15;
    int sum = 0;

    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    cout << "Sum of the first " << n << " natural numbers: " << sum << endl;

    return 0;
}


