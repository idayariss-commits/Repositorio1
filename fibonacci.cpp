#include <iostream>
using namespace std;

int main() {
    int N;
    int a = 0, b = 1, siguiente;

    cout << "Ingrese la cantidad de terminos: ";
    cin >> N;

    cout << "Serie de Fibonacci:" << endl;

for (int i = 1; i <= N; i++) {
        cout << a << " ";

        siguiente = a + b;
        a = b;
        b = siguiente;
}

    return 0;
}