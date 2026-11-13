#include <iostream>

int main() {

    int numero1;
    int numero2;

    std::cout << "Ingresa el primer numero: ";
    std::cin >> numero1;

    std::cout << "Ingresa el segundo numero: ";
    std::cin >> numero2;

    if (numero1 > numero2) {
        std::cout << "El primer numero es mayor";
    }
    else if (numero2 > numero1) {
        std::cout << "El segundo numero es mayor";
    }
    else {
        std::cout << "Los dos numeros son iguales";
    }

    return 0;
}