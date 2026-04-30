#include <iostream>
using namespace std;

int main() {
    int edad, infracciones, experiencia;

    cout << "Edad: ";
    cin >> edad;

    cout << "Numero de infracciones: ";
    cin >> infracciones;

    cout << "Anos de experiencia: ";
    cin >> experiencia;

    if (edad < 18) {
        cout << "No apto para conducir." << endl;
    } 
    else if (infracciones == 0 && experiencia >= 3) {
        cout << "Conductor EXCELENTE." << endl;
    } 
    else if (infracciones <= 2 && experiencia >= 1) {
        cout << "Conductor BUENO." << endl;
    } 
    else {
        cout << "Conductor DE RIESGO." << endl;
    }

    return 0;
}