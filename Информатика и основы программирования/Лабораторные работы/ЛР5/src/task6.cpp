#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int main() {
    const int MAX = 10;
    int a[MAX][MAX];
    double avg[MAX];
    int n, m;

    do {
        cout << "Enter n and m (1..10): ";
        cin >> n >> m;
    } while (n < 1 || n > MAX || m < 1 || m > MAX);

    srand(static_cast<unsigned>(time(0)));
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
            a[i][j] = rand() % 10 + 1;
            sum += a[i][j];
        }
        avg[i] = static_cast<double>(sum) / m;
    }

    double maxAvg = avg[0];
    for (int i = 1; i < n; i++)
        if (avg[i] > maxAvg)
            maxAvg = avg[i];

    cout << fixed << setprecision(2);
    cout << "Matrix and row averages:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << setw(3) << a[i][j];
        cout << " | " << avg[i] << endl;
    }
    cout << "Maximum row average = " << maxAvg << endl;

    return 0;
}
