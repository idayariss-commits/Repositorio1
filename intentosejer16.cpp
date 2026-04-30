#include <iostream>
using namespace std;

int main() {
    string usuario, contrasena;
    int intentos = 0;

    while (intentos < 3) {
        cout << "Usuario: ";
        cin >> usuario;

        cout << "Contrasena: ";
        cin >> contrasena;

        if (usuario == "chejeyayi" && contrasena == "68") {
            cout << "Acceso concedido." << endl;
            break;
        } else {
            cout << "Datos incorrectos." << endl;
            intentos++;
        }
    }

    if (intentos == 5) {
        cout << "Acceso bloqueado." << endl;
    }

    return 0;
}