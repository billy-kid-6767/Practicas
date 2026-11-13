#include <iostream>
using namespace std;

int main() {
    int numero1, numero2;
    int suma = 0;

    cout << "Ingresa el primer numero: ";
    cin >> numero1;

    cout << "Ingresa el segundo numero: ";
    cin >> numero2;

    if (numero1 > numero2) {
        int auxiliar = numero1;
        numero1 = numero2;
        numero2 = auxiliar;
    }

    while (numero1 <= numero2) {
        suma = suma + numero1;
        numero1++;
    }

    cout << "La suma total es: " << suma << endl;

    return 0;
}