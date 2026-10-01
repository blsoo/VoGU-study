#include <iostream>
#include <cstdlib>
#include <ctime>
#include <climits>
using namespace std;

int main() {
    const int MAX_N = 20;
    int a[MAX_N];
    int n;

    do {
        cout << "Enter n (1..20): ";
        cin >> n;
    } while (n < 1 || n > MAX_N);

    srand(static_cast<unsigned>(time(0)));
    cout << "Array: ";
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 101 - 50;
        cout << a[i] << " ";
    }
    cout << endl;

    int count = 0;
    int minValue = INT_MAX;
    // User numbering starts from 1, so even numbers are positions 2, 4, ...
    for (int i = 1; i < n; i += 2) {
        count++;
        if (a[i] < minValue)
            minValue = a[i];
    }

    cout << "Count of elements with even position numbers = " << count << endl;
    if (count > 0)
        cout << "Minimum among them = " << minValue << endl;
    else
        cout << "There are no elements with even position numbers." << endl;

    return 0;
}
