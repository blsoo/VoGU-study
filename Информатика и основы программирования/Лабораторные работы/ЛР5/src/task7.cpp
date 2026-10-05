#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int main() {
    const int MAX = 10;
    int a[MAX][MAX];
    int n, m;

    // Ограничиваем размеры вместимостью используемой матрицы 10x10.
    do {
        cout << "Enter n and m (1..10): ";
        cin >> n >> m;
    } while (n < 1 || n > MAX || m < 1 || m > MAX);

    // Формируем исходную матрицу числами от -50 до 50.
    srand(static_cast<unsigned>(time(0)));
    cout << "Input matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = rand() % 101 - 50;
            cout << setw(5) << a[i][j];
        }
        cout << endl;
    }

    // Сортируем строки пузырьковым методом по последнему столбцу по возрастанию.
    // При обмене меняем местами всю строку, а не только последний элемент.
    for (int pass = 0; pass < n - 1; pass++) {
        for (int i = 0; i < n - 1 - pass; i++) {
            if (a[i][m - 1] > a[i + 1][m - 1]) {
                for (int j = 0; j < m; j++) {
                    int temp = a[i][j];
                    a[i][j] = a[i + 1][j];
                    a[i + 1][j] = temp;
                }
            }
        }
    }

    // Выводим преобразованную матрицу.
    cout << "Sorted matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << setw(5) << a[i][j];
        cout << endl;
    }

    return 0;
}
