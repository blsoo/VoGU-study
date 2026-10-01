#include <iostream>
using namespace std;

int main() {
    double x, y, z;
    cout << "Enter three positive side lengths x, y, z: ";
    cin >> x >> y >> z;

    if (x <= 0 || y <= 0 || z <= 0) {
        cout << "Input error: all side lengths must be positive." << endl;
        return 0;
    }

    bool exists = (x + y > z) && (x + z > y) && (y + z > x);

    if (!exists) {
        cout << "A triangle with these sides does not exist." << endl;
        return 0;
    }

    bool obtuse = (x * x > y * y + z * z) ||
                  (y * y > x * x + z * z) ||
                  (z * z > x * x + y * y);

    cout << "The triangle exists." << endl;
    if (obtuse)
        cout << "The triangle is obtuse." << endl;
    else
        cout << "The triangle is not obtuse." << endl;

    return 0;
}
