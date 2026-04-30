#include <iostream>
using namespace std;

int main() {
    string pass1, pass2;

    cout << "Ingrese contrasena: ";
    cin >> pass1;
    cout << "Confirme contrasena: ";
    cin >> pass2;

    if (pass1 == pass2) {
        cout << "Contrasenas coinciden." << endl;
    } else {
        cout << "No coinciden." << endl;
    }

    return 0;
}