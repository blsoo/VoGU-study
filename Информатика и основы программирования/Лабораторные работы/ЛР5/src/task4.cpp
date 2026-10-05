#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int MAX_N = 20;
    const int CAPACITY = 2 * MAX_N; // В худшем случае вставка нужна после всех 20 элементов.
    int a[CAPACITY];
    int n, x;

    // Проверяем допустимый исходный размер массива.
    do {
        cout << "Enter n (1..20): ";
        cin >> n;
    } while (n < 1 || n > MAX_N);

    cout << "Enter the number to insert: ";
    cin >> x;

    // В условии диапазон случайных значений не задан,
    // поэтому используем диапазон [-10; 10].
    srand(static_cast<unsigned>(time(0)));
    cout << "Input array: ";
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 21 - 10;
        cout << a[i] << " ";
    }
    cout << endl;

    // Просматриваем исходные элементы. После элемента, кратного 3,
    // сдвигаем хвост вправо и вставляем x без дополнительного массива.
    int i = 0;
    while (i < n) {
        if (a[i] % 3 == 0) {
            for (int j = n; j > i + 1; j--)
                a[j] = a[j - 1];
            a[i + 1] = x;
            n++;
            i += 2; // Пропускаем вставленный элемент и переходим к следующему исходному.
        } else {
            i++;
        }
    }

    // Выводим преобразованный массив.
    cout << "Output array: ";
    for (int k = 0; k < n; k++)
        cout << a[k] << " ";
    cout << endl;

    return 0;
}
