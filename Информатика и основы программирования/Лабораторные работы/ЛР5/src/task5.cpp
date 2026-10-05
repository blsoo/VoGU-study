#include <iostream>
using namespace std;

int main() {
    const int MAX_N = 10;
    int a[MAX_N][MAX_N];
    int n;

    // Проверяем размер квадратной матрицы.
    do {
        cout << "Enter n (1..10): ";
        cin >> n;
    } while (n < 1 || n > MAX_N);

    // Формируем матрицу по заданному правилу.
    // Главная диагональ имеет приоритет, поэтому центральный элемент при нечётном n равен 1.
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j)
                a[i][j] = 1;
            else if (i + j == n - 1)
                a[i][j] = 2;
            else
                a[i][j] = 0;
        }
    }

    // Выводим сформированную матрицу.
    cout << "Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }

    return 0;
}
