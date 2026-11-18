zadanie 03z
#include <iostream>
using namespace std;

int main() {
    int liczba;
    int suma=0;
    int n=0;
    int max, min;
    int srednia;
    cout << "Podaj liczby calkowite " << endl;
    cin >> liczba;
    if (liczba == 0) {
        cout << "Nie podano żadnych liczb przed zerem." << endl;
        return 0;
    }
    max = liczba;
    min = liczba;
    while (true) {
        cin >> liczba;
        if (liczba == 0) {
            break; 
        }
        suma += liczba;
        n++;
        if (liczba > max) {
            max = liczba;
        }
        if (liczba < min) {
            min = liczba;
        }
    }
    srednia=suma/n;
    cout << " Największa podana liczba: " << max<< endl;
    cout << " Najmniejsza podana liczba: " << min<< endl;
    cout << " Suma: " << suma<< endl;
    cout << " Średnia: " << srednia<< endl;
    return 0;
}