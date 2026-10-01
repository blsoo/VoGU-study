#include <iostream>
using namespace std;

int main() {
    int n;
    do {
        cout << "Enter n (n >= 1): ";
        cin >> n;
    } while (n < 1);

    int bestNumber = 1;
    int maxSum = 0;

    for (int value = 1; value <= n; value++) {
        int sum = 0;
        for (int d = 2; d <= value / 2; d++) {
            if (value % d == 0)
                sum += d;
        }

        if (sum > maxSum) {
            maxSum = sum;
            bestNumber = value;
        }
    }

    cout << "Number with maximum divisor sum = " << bestNumber << endl;
    cout << "Maximum sum (without 1 and the number itself) = " << maxSum << endl;
    return 0;
}
