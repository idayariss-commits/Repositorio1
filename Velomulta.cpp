#include <iostream>
using namespace std;

int main() {
    int velocidad;

    cout << "Ingrese la velocidad del conductor (km/h): ";
    cin >> velocidad;

    if (velocidad > 80) {
        cout << "Multa alta" << endl;
    } else if (velocidad > 60) {
        cout << "Multa normal" << endl;
    } else {
        cout << "Sin multa" << endl;
    }

    return 0;
}