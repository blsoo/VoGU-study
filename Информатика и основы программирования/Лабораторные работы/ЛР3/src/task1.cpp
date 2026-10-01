#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y, result;
    cout << "Enter x and y: ";
    cin >> x >> y;

    result = fabs(x) - fabs(y) * (1 + fabs(x * y));

    cout << "Result = " << result << endl;
    return 0;
}
