#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int b = 12;
    int c = 0;
    int result1 = a++ + ++a;
    cout << "Result 1: " << result1 << endl;
    int result2 = b = b++ + b-- + a++ + ++a;
    cout << "Result 2: " << result2 << endl;
    int result3 = c = (c++ * b-- - ++a) / --c;
    cout << "Result 3: " << result3 << endl;
    int result4 = a = (c++ % ++b) + --a + a--;
    cout << "Result 4: " << result4 << endl;

    return 0;
}

