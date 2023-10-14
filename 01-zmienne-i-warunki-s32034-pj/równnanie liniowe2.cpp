#include <iostream>

using namespace std;

int main() {
    double a, b, x;

    // Prosimy użytkownika o wprowadzenie współczynników
    cout << "Podaj wspolczynnik a: ";
    cin >> a;

    cout << "Podaj wspolczynnik b: ";
    cin >> b;

    // Sprawdzamy wyjątki
    if (a == 0) {
        if (b == 0) {
            cout << "Rownanie ma nieskonczenie wiele rozwiazan." << endl;
        }
        else {
            cout << "Rownanie nie ma rozwiazania." << endl;
        }
    }
    else {
        // Obliczamy i wyświetlamy rozwiązanie
        x = -b / a;
        cout << "Rozwiazanie rownania to x = " << x << endl;
    }

    return 0;
}