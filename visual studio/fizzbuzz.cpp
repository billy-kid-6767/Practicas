#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingresa un numero: ";
    cin >> numero;

    if (numero <= 0) {
        cout << "Ingresa un numero positivo.";
        return 0;
    }

    for (int i = 1; i <= numero; i++) {
        if (i % 2 != 0) {
            cout << "Fizz" << endl;
        } else {
            cout << "Buzz" << endl;
        }
    }

    return 0;
}