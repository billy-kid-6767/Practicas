#include <iostream>

int main() {

    int numero1;
    int numero2;
    int menor;
    int mayor;
    int actual;
    int suma = 0;

    std::cout << "Ingresa el primer numero: ";
    std::cin >> numero1;

    std::cout << "Ingresa el segundo numero: ";
    std::cin >> numero2;

    if (numero1 < numero2) {
        menor = numero1;
        mayor = numero2;
    }
    else {
        menor = numero2;
        mayor = numero1;
    }

    actual = menor;

    while (actual <= mayor) {
        suma = suma + actual;
        actual++;
    }

    std::cout << "La suma del intervalo es: "
              << suma << std::endl;

    return 0;
}