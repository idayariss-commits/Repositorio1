#include <iostream>
using namespace std;

int main() {
    int consumo;

    cout << "Ingrese consumo (kWh): ";
    cin >> consumo;

    if (consumo < 100) {
        cout << "Tarifa baja." << endl;
    } else if (consumo <= 200) {
        cout << "Tarifa media." << endl;
    } else {
        cout << "Tarifa alta." << endl;
    }

    return 0;
}