#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Ingrese dos numeros: ";
    cin >> a >> b;

    if (a > b) {
        cout << "El mayor es: " << a << endl;
    } else if (b > a) {
        cout << "El mayor es: " << b << endl;
    } else {
        cout << "Ambos son iguales." << endl;
    }

    return 0;
}