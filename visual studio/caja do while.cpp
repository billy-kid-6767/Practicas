#include <iostream>

int main() {

    double precio;
    double total = 0;
    int continuar;

    do {
        std::cout << "Ingresa el precio del producto: ";
        std::cin >> precio;

        total = total + precio;

        std::cout << "Deseas agregar otro producto? (1 = Si, 0 = No): ";
        std::cin >> continuar;

    } while (continuar == 1);

    std::cout << "Total de la compra: $" << total << std::endl;

    return 0;
}