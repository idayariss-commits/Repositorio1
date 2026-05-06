#include <iostream>
#include <iomanip> // para mostrar decimales
using namespace std;

int main() {
    int opcion;
    float costo = 0;

    cout << "Seleccione tipo de transporte:" << endl;
    cout << "1 = Coaster R44" << endl;
    cout << "2 = Coaster 101D" << endl;
    cout << "3 = Coaster R22" << endl;
    cout << "4 = Coaster 109" << endl;
    cout << "Opcion: ";
    cin >> opcion;

    switch(opcion) {
        case 1:
            cout << "Ruta: Coaster R44" << endl;
            costo = 0.30;
            break;
        case 2:
            cout << "Ruta: Coaster 101D" << endl;
            costo = 0.35;
            break;
        case 3:
            cout << "Ruta: Coaster R22" << endl;
            costo = 0.25;
            break;
        case 4:
            cout << "Ruta: Coaster 109" << endl;
            costo = 0.80;
            break;
        default:
            cout << "Opcion invalida" << endl;
            return 0;
    }

    // Mostrar con 2 decimales
    cout << fixed << setprecision(2);
    cout << "El costo del pasaje es: $" << costo << endl;

    return 0;
}