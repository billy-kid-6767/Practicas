#include <iostream>
int main() {

    int numero1;
    int numero2;

    std::cout<<"ingresa el primer numero"<< std:: endl;
    std::cin>> numero1;

    std::cout<<"ingresa el segundo numero"<< std:: endl;
    std::cin>> numero2;

    if (numero1 > numero2) {
        std::cout<<"El primer numero es mayor";

    } else if (numero1 == numero2) {
        std::cout<<"son iguales";

    } else {

        std::cout<<"El segundo numero es mayor";
    }


}