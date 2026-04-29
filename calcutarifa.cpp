#include <iostream>
using namespace std;

int main() {
    float peso;

    cout << "Ingrese el peso del paquete (kg): ";
    cin >> peso;

    if (peso <= 5) {
        cout << "Costo de envio: $5" << endl;
    } else if (peso <= 10) {
        cout << "Costo de envio: $10" << endl;
    } else {
        cout << "Costo de envio: $15" << endl;
    }

    return 0;
}