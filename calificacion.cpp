#include <iostream>
using namespace std;

int main() {
    float nota;

    cout << "Ingrese la calificacion: ";
    cin >> nota;

    if (nota <= 60) {
        cout << "Aprobado." << endl;
    } else {
        cout << "Reprobado." << endl;
    }

    return 0;
}