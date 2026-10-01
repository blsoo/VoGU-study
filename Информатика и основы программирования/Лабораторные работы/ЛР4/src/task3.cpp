#include <iostream>
#include <cmath>
#include <iomanip>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "");

    const double PI = acos(-1.0);
    const double EPS = 1e-12;
    double xBegin, xEnd, h;

    do {
        cout << "Enter xBegin, xEnd and positive step h (xBegin <= xEnd): ";
        cin >> xBegin >> xEnd >> h;
    } while (h <= 0 || xBegin > xEnd);

    cout << fixed << setprecision(5);
    cout << "x\tF(x)" << endl;

    for (double x = xBegin; x <= xEnd + h * 1e-9; x += h) {
        double radicand = cos(PI * x * x);
        cout << x << "\t";

        if (radicand >= -EPS) {
            if (radicand < 0) radicand = 0;
            double F = 99.0 * sqrt(radicand) + x * log10(PI);
            cout << F << endl;
        } else {
            cout << "функция не определена" << endl;
        }
    }

    return 0;
}
