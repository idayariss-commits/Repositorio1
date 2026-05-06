#include <iostream>
using namespace std;

int main() {
    int dia;

    cout << "Ingrese el dia de la semana (1-7): " << endl;
    cout << "1=Lunes, 2=Martes, 3=Miercoles, 4=Jueves, 5=Viernes, 6=Sabado, 7=Domingo" << endl;
    cin >> dia;

    switch(dia) {
        case 1:
            cout << "Lunes: Programacion 10-12 AM, Programacion 10-12 PM" << endl;
            break;
        case 2:
            cout << "Martes: MD1 11-12 AM" << endl;
            break;
        case 3:
            cout << "Miercoles: Elementos 9-10 AM" << endl;
            break;
        case 4:
            cout << "Jueves: Precalculo 7-9 AM" << endl;
            break;
        case 5:
            cout << "Viernes: Base de Datos 8-10 AM" << endl;
            break;
        case 6:
            cout << "Sabado: No hay clases xd" << endl;
            break;
        case 7:
            cout << "Domingo: No hay clases xd" << endl;
            break;
        default:
            cout << "invalido" << endl;
    }

    return 0;
}