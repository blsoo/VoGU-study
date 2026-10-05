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
    cout << "Input array: ";
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 21 - 10;
        cout << a[i] << " ";
    }
    cout << endl;

    // Ищем последний положительный элемент с конца массива.
    int index = -1;
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] > 0) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        // Если положительных элементов нет, массив остаётся без изменений.
        cout << "There is no positive element. The array is unchanged." << endl;
    } else {
        // Удаляем найденный элемент сдвигом хвоста на одну позицию влево.
        for (int i = index; i < n - 1; i++)
            a[i] = a[i + 1];
        n--;
        cout << "Deleted element position = " << index + 1 << endl;
    }

    cout << "Output array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    return 0;
}
