#include <iostream>

int main() {

    int numero = 1;
    int suma = 0;

    while (numero <= 100) {

        suma = suma + numero;

        std::cout << "Al sumar " << numero
                  << ", el resultado es: " << suma << std::endl;

        numero++;
    }

    return 0;
}