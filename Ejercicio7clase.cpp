#include <iostream>
using namespace std;

int main() {
    int contador = 0;
    cout << "ingrese un numero para inciar la cuenta regresiva" << endl ;
    cin >> contador;


    // Ciclo de wile
    do { 
        cout << contador << endl;
        contador--; 
    } while (contador >= 0);
    cout <<"Termino la cuenta regresiva";
    return 0;
    }