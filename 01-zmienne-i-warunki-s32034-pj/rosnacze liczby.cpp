#include <iostream>

using namespace std;

int main() {
    int poprzednia, nastepna;

    cout << "Podaj 1 liczbe:" << endl;
    cin >> poprzednia;

    cout << "Podaj 2 liczbe:" << endl;
    cin >> nastepna;

    if (nastepna <= poprzednia) {
        cout << "Liczba nie jest wieksza od poprzedniej. Koniec programu." << endl;
        return 0;
    }

    poprzednia = nastepna;

    cout << "Podaj 3 liczbe:" << endl;
    cin >> nastepna;

    if (nastepna <= poprzednia) {
        cout << "Liczba nie jest wieksza od poprzedniej. Koniec programu." << endl;
        return 0;
    }

    poprzednia = nastepna;

    cout << "Podaj 4 liczbe:" << endl;
    cin >> nastepna;

    if (nastepna <= poprzednia) {
        cout << "Liczba nie jest wieksza od poprzedniej. Koniec programu." << endl;
        return 0;
    }

    poprzednia = nastepna;

    cout << "Podaj 5 liczbe:" << endl;
    cin >> nastepna;

    if (nastepna <= poprzednia) {
        cout << "Liczba nie jest wieksza od poprzedniej. Koniec programu." << endl;
        return 0;
    }

    cout << "Wszystkie liczby zostaly podane prawidlowo." << endl;
    return 0;
}