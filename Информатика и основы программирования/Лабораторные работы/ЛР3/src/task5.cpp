#include <iostream>
#include <iomanip>
#include <string>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "");

    int code;
    double minutes;
    double pricePerMinute = 0.0;
    string city;

    cout << "Enter city code and call duration (minutes): ";
    cin >> code >> minutes;

    if (minutes <= 0) {
        cout << "Ошибка ввода данных" << endl;
        return 0;
    }

    // Таблица тарифов восстановлена по исходной задаче Н. Культина,
    // из которой взята формулировка задания в методических указаниях.
    switch (code) {
        case 423:
            city = "Vladivostok";
            pricePerMinute = 2.2;
            break;
        case 495:
            city = "Moscow";
            pricePerMinute = 1.0;
            break;
        case 815:
            city = "Murmansk";
            pricePerMinute = 1.2;
            break;
        case 846:
            city = "Samara";
            pricePerMinute = 1.4;
            break;
        default:
            cout << "Ошибка ввода данных" << endl;
            return 0;
    }

    double cost = pricePerMinute * minutes;
    cout << fixed << setprecision(2);
    cout << "City = " << city << endl;
    cout << "Price per minute = " << pricePerMinute << " rub." << endl;
    cout << "Call cost = " << cost << " rub." << endl;

    return 0;
}
