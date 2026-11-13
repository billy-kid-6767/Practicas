#include <iostream>

int main() {

    int numero;

    std::cout << "Ingresa un numero: " << std::endl;
    std::cin >> numero;

    if (numero % 2 == 0) {

        if (numero % 3 == 0) {
            std::cout << "El numero es divisible entre 2 y 3" << std::endl;

        } else {

            std::cout << "El numero solamente se puede dividir entre 2" << std::endl;
        }
    } else {

        if (numero % 3 == 0) {
            std::cout << "El numero solamente se puede dividir entre 3" << std::endl;

        } else {
            std::cout << "El numero no es divisible entre 2 ni entre 3" << std::endl;
        }

    }

}