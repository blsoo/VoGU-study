#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers a and b: ";
    cin >> a >> b;

    if (a == b) {
        if (a == 0)
            cout << "Numbers are equal to zero; division by zero is impossible." << endl;
        else
            cout << "Numbers are equal; there is no larger and smaller number." << endl;
        return 0;
    }

    int larger = (a > b) ? a : b;
    int smaller = (a > b) ? b : a;

    if (smaller == 0) {
        cout << "Division by zero is impossible." << endl;
    } else if (larger % smaller == 0) {
        cout << larger << " is divisible by " << smaller << " without remainder." << endl;
    } else {
        cout << larger << " is NOT divisible by " << smaller << " without remainder." << endl;
    }

    return 0;
}
