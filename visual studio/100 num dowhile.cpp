#include <iostream>

int main() {

    int numero = 1;
    int suma = 0;

    do {
        suma = suma + numero;

        std::cout << "Al sumar " << numero
                  << ", el resultado es: " << suma << std::endl;

        numero++;

    } while (numero <= 100);

    return 0;
}