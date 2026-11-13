#include <iostream>
using namespace std;

int main() {
    int numero, limite;

    cout << "Ingresa el numero de la tabla: ";
    cin >> numero;

    cout << "Ingresa el limite: ";
    cin >> limite;

    for (int i = 1; i <= limite; i++) {
        cout << numero << " x " << i
             << " = " << numero * i << endl;
    }

    return 0;
}