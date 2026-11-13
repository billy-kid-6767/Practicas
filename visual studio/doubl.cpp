#include <iostream>
#include <cmath>

int main() {

    double numero1;
    double numero2;
    int opcion;
    std::cout << "Ingresa el primer numero: ";
    std::cin >> numero1;
    std::cout << "Ingresa el segundo numero: ";
    std::cin >> numero2;

    std::cout << "1. Suma"<< std:: endl;
    std::cout << "2. Resta"<< std:: endl;
    std::cout << "3. Multiplicacion"<< std:: endl;
    std::cout << "4. Division"<< std:: endl;
    std::cout << "5. Potencia"<< std:: endl;
    std::cout << "6. Raiz cuadrada"<< std:: endl;

    std::cout << "Elige una opcion: ";
    std::cin >> opcion;

    if (opcion == 1) {
        std::cout << "Resultado: " << numero1 + numero2 << std::endl;

    } else if (opcion == 2) {
        std::cout << "Resultado: " << numero1 - numero2 << std::endl;

    } else if (opcion == 3) {
        std::cout << "Resultado: " << numero1 * numero2 << std::endl;

    } else if (opcion == 4) {
        std::cout << "Resultado: " << numero1 / numero2 << std::endl;

    } else if (opcion == 5) {
        std::cout << "Resultado: " << pow(numero1, numero2) << std::endl;

    } else if (opcion == 6) {
        std::cout << "Raiz del primer numero: " << sqrt(numero1) << std::endl;
        std::cout << "Raiz del segundo numero: " << sqrt(numero2) << std::endl;

    } else {
        std::cout << "Opcion no valida" << std::endl;
    }

}
