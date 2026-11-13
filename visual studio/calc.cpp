#include <iostream>

int main() {

    int numero1;
    int numero2;
    int opcion;

    std::cout << "Ingresa el primer numero: "<< std:: endl;

    std::cin >> numero1;

    std::cout << "Ingresa el segundo numero: "<< std:: endl;

    std::cin >> numero2;

    std::cout << "¿Que operacion quieres realizar?"<< std:: endl;

    std::cout << "1. Suma"<< std:: endl;

    std::cout << "2. Resta"<< std:: endl;

    std::cout << "3. Multiplicacion"<< std:: endl;

    std::cout << "4. Division"<< std:: endl;

    std::cin >> opcion;

    if (opcion == 1) {
        std::cout << "Resultado: " << numero1 + numero2<< std:: endl;

    } else if (opcion == 2) {
        std::cout << "Resultado: " << numero1 - numero2<< std:: endl;

    } else if (opcion == 3) {
        std::cout << "Resultado: " << numero1 * numero2<< std:: endl;

    } else if (opcion == 4) {
        std::cout << "Resultado: " << numero1 / numero2<< std:: endl;

    } else {
        std::cout << "Opcion no valida"<< std:: endl;
    }

}
