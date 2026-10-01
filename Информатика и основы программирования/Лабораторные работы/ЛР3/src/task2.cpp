#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a four-digit positive integer: ";
    cin >> n;

    if (n < 1000 || n > 9999) {
        cout << "Input error: the number must contain exactly four digits." << endl;
        return 0;
    }

    int d1 = n / 1000;
    int d2 = (n / 100) % 10;
    int d3 = (n / 10) % 10;
    int d4 = n % 10;
    int result = d1 - d2 - d3 - d4;

    cout << "Digits: " << d1 << " " << d2 << " " << d3 << " " << d4 << endl;
    cout << "Difference = " << result << endl;
    return 0;
}
