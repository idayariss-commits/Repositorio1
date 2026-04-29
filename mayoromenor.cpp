#include <iostream>
using namespace std;

int main() {
    int celcius;

    cout << "Ingrese la temperatura en grados celcius: ";
    cin >> celcius;

    if (celcius < 0) {
        cout << "La temperatura es helada." << endl;
    } else if (celcius <= 15) {
        cout << "La temperatura es tibia." << endl;
    } else {
        cout << "La temperatura es caliente." << endl;
    }

    return 0;
}