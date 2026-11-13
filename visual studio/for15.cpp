
#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingresa un numero: ";
    cin >> numero;

    cout << "\nTabla de multiplicar del " << numero << endl;

    for (int i = 1; i <= 15; i++) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }

    return 0;
}

