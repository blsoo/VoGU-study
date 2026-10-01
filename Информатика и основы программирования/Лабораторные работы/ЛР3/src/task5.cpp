#include <iostream>
#include <iomanip>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "");

    int code;
    double minutes, pricePerMinute = 0.0;

    cout << "Enter city code and call duration (minutes): ";
    cin >> code >> minutes;

    if (minutes <= 0) {
        cout << "Ошибка ввода данных" << endl;
        return 0;
    }

    // В методических указаниях конкретная тарифная таблица не задана,
    // поэтому используется фиксированная учебная таблица тарифов.
    switch (code) {
        case 495: pricePerMinute = 5.0; break;   // Москва
        case 812: pricePerMinute = 6.0; break;   // Санкт-Петербург
        case 343: pricePerMinute = 9.0; break;   // Екатеринбург
        case 383: pricePerMinute = 10.0; break;  // Новосибирск
        default:
            cout << "Ошибка ввода данных" << endl;
            return 0;
    }

    double cost = pricePerMinute * minutes;
    cout << fixed << setprecision(2);
    cout << "Price per minute = " << pricePerMinute << " rub." << endl;
    cout << "Call cost = " << cost << " rub." << endl;
    return 0;
}
