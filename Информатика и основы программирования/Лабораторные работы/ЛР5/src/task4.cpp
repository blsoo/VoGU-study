#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int MAX_N = 20;
    const int CAPACITY = 2 * MAX_N;
    int a[CAPACITY];
    int n, x;

    do {
        cout << "Enter n (1..20): ";
        cin >> n;
    } while (n < 1 || n > MAX_N);

    cout << "Enter the number to insert: ";
    cin >> x;

    srand(static_cast<unsigned>(time(0)));
    cout << "Input array: ";
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 21 - 10;
        cout << a[i] << " ";
    }
    cout << endl;

    int i = 0;
    while (i < n) {
        if (a[i] % 3 == 0) {
            for (int j = n; j > i + 1; j--)
                a[j] = a[j - 1];
            a[i + 1] = x;
            n++;
            i += 2; // Skip the inserted element so it is not processed again.
        } else {
            i++;
        }
    }

    cout << "Output array: ";
    for (int k = 0; k < n; k++)
        cout << a[k] << " ";
    cout << endl;

    return 0;
}
