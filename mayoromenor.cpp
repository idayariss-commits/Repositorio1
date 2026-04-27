#include <iostream> 
using namespace std;

int main () {
    int celcius, helada, tibia, caliente;
    cout << "ingrese la temperatura en grados celcius: ";
    cin >> celcius;
    if (celcius < 0 ) {
        cout << "La tempeatura es helada." << endl;
    } else if (celcius >=0 && celcius <=15) {
        cout << "La temperatura es tibia." << endl;
    } else {
        cout << "La temperatura es caliente." << endl;
    }
    return 0;
}