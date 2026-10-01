#include <iostream>
using namespace std;

long long intPow(int base, int exponent) {
    long long result = 1;
    for (int i = 0; i < exponent; i++)
        result *= base;
    return result;
}

int main() {
    long long n;
    do {
        cout << "Enter a natural number: ";
        cin >> n;
    } while (n <= 0);

    long long temp = n;
    int digits = 0;
    do {
        digits++;
        temp /= 10;
    } while (temp > 0);

    temp = n;
    long long sum = 0;
    while (temp > 0) {
        int digit = static_cast<int>(temp % 10);
        sum += intPow(digit, digits);
        temp /= 10;
    }

    if (sum == n)
        cout << n << " is an Armstrong number." << endl;
    else
        cout << n << " is NOT an Armstrong number." << endl;

    return 0;
}
