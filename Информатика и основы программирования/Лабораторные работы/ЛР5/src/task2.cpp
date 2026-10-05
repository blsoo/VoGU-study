#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int MAX_N = 20;
    int a[MAX_N];
    int n;

    // Проверяем допустимый размер массива.
    do {
        cout << "Enter n (1..20): ";
        cin >> n;
    } while (n < 1 || n > MAX_N);

    // В условии диапазон случайных значений не задан,
    // поэтому используем диапазон [-10; 10].
    srand(static_cast<unsigned>(time(0)));
    cout << "Array: ";
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 21 - 10;
        cout << a[i] << " ";
    }
    cout << endl;

    // current — длина текущей серии отрицательных элементов,
    // maximum — максимальная длина такой серии.
    int current = 0;
    int maximum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            current++;
            if (current > maximum)
                maximum = current;
        } else {
            current = 0;
        }
    }

    // Для полностью положительного массива maximum останется равным 0.
    cout << "Maximum number of consecutive negative elements = " << maximum << endl;
    return 0;
}
