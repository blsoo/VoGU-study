#include <iostream>
using namespace std;

int main() {
    int i = 0, x;
    int positive = 0, negative = 0, zero = 0;

    cout << "Enter 10 integers:" << endl;
    while (i < 10) {
        cin >> x;
        if (x > 0) positive++;
        else if (x < 0) negative++;
        else zero++;
        i++;
    }

    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;
    cout << "Zero: " << zero << endl;
    return 0;
}
