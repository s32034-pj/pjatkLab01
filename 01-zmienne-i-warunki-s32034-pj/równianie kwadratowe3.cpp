#include <iostream>
#include <cmath>  // Potrzebne dla funkcji sqrt()

using namespace std;

int main() {
    double a, b, c, delta, x1, x2;

    cout << "Podaj wspolczynnik a: ";
    cin >> a;

    cout << "Podaj wspolczynnik b: ";
    cin >> b;

    cout << "Podaj wspolczynnik c: ";
    cin >> c;

    delta = b * b - 4 * a * c;  // Obliczanie wyznacznika

    if (delta > 0) {
        x1 = (-b - sqrt(delta)) / (2 * a);
        x2 = (-b + sqrt(delta)) / (2 * a);
        cout << "Rownanie ma dwa pierwiastki: x1 = " << x1 << ", x2 = " << x2 << endl;
    }
    else if (delta == 0) {
        x1 = -b / (2 * a);
        cout << "Rownanie ma jeden pierwiastek: x = " << x1 << endl;
    }
    else {
        cout << "Rownanie nie ma rozwiazania w zbiorze liczb rzeczywistych." << endl;
    }

    return 0;
}