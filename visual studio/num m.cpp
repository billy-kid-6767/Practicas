#include <iostream>

int main() {

    int numero1;
    int numero2;
    int numero3;

    std::cout << "Ingresa el primer numero: "<< std:: endl;

    std::cin >> numero1;

    std::cout << "Ingresa el segundo numero: "<< std:: endl;

    std::cin >> numero2;

    std::cout << "Ingresa el tercer numero: "<< std:: endl;

    std::cin >> numero3;

    if (numero1 > numero2) {

        if (numero1 > numero3) {
            std::cout << "El primer numero es mayor";

        } else {
            std::cout << "El tercer numero es mayor";
        }

  } else {

        if (numero2 > numero3) {
            std::cout << "El segundo numero es mayor";

        } else {
            std::cout << "El tercer numero es mayor";
        }
        
    }

}