zadanie02p.cpp
#include <iostream>
using namespace std;

int main() {
    int wynik = 0;
    int wybor;
    int a = 0, b = 0;
    char znak;

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Zmien pierwsza liczbe (aktualnie: " << a << ")\n";
        cout << "2. Zmien druga liczbe (aktualnie: " << b << ")\n";
        cout << "3. Wybierz dzialanie (+, -, *, /, %)\n";
        cout << "4. Wyswietl aktualny wynik\n";
        cout << "0. Wyjscie\n";
        cout << "Wybor: ";
        cin >> wybor;

        switch (wybor) {
            case 1:
                cout << "Podaj pierwsza liczbe: ";
                cin >> a;
                break;
            case 2:
                cout << "Podaj druga liczbe: ";
                cin >> b;
                break;
            case 3:
                cout << "podaj znak" << endl;
                cin >> znak;
                if (znak == '+') {
                    wynik = a + b;
                } else if (znak == '-') {
                    wynik = a - b;
                } else if (znak == '*') {
                    wynik = a * b;
                } else if (znak == '/') {
                    if (b == 0) {
                        cout << "nie dzielimy przez zero" << endl;
                    } else {
                        wynik = a / b;
                    }
                } else if (znak == '%') {
                    if (b == 0) {
                        cout << "nie dzielimy przez zero" << endl;
                    } else {
                        wynik = a % b;
                    }
                } else {
                    cout << "nieznany znak" << endl;
                }
                break;
            case 4:
                cout << "Aktualny wynik: " << wynik << endl;
                break;
            case 0:
                cout << "Koniec programu." << endl;
                break;
            default:
                cout << "niepoprawna opcja" << endl;
                break;
        }
    } while (wybor != 0);

    return 0;
}