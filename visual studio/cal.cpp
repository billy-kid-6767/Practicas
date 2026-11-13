#include <iostream>

int main() {

    int numero1;
    int numero2;

    std::cout << "Ingresa el primer numero: ";
    std::cin >> numero1;

    std::cout << "Ingresa el segundo numero: ";
    std::cin >> numero2;

    std::cout << "Suma: " << numero1 + numero2 << std::endl;

    std::cout << "Resta: " << numero1 - numero2 << std::endl;

    std::cout << "Multiplicacion: " << numero1 * numero2 << std::endl;

    std::cout << "Division: " << numero1 / numero2;

}