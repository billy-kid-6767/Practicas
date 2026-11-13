#include <iostream>

int main() {

    int opcion;
    double saldo = 1000;
    double cantidad;

    do {
        std::cout << "\n=== CAJERO AUTOMATICO ===" << std::endl;
        std::cout << "1. Consultar saldo" << std::endl;
        std::cout << "2. Depositar dinero" << std::endl;
        std::cout << "3. Retirar dinero" << std::endl;
        std::cout << "4. Salir" << std::endl;

        std::cout << "Selecciona una opcion: ";
        std::cin >> opcion;

        switch (opcion) {

            case 1:
                std::cout << "Tu saldo actual es: $"
                          << saldo << std::endl;
                break;

            case 2:
                std::cout << "Ingresa la cantidad a depositar: $";
                std::cin >> cantidad;

                if (cantidad > 0) {
                    saldo = saldo + cantidad;
                    std::cout << "Deposito realizado correctamente."
                              << std::endl;
                }
                else {
                    std::cout << "La cantidad no es valida."
                              << std::endl;
                }
                break;

            case 3:
                std::cout << "Ingresa la cantidad a retirar: $";
                std::cin >> cantidad;

                if (cantidad <= 0) {
                    std::cout << "La cantidad no es valida."
                              << std::endl;
                }
                else if (cantidad <= saldo) {
                    saldo = saldo - cantidad;
                    std::cout << "Retiro realizado correctamente."
                              << std::endl;
                }
                else {
                    std::cout << "Saldo insuficiente."
                              << std::endl;
                }
                break;

            case 4:
                std::cout << "Gracias por utilizar el cajero."
                          << std::endl;
                break;

            default:
                std::cout << "Opcion no valida."
                          << std::endl;
        }

    } while (opcion != 4);

    return 0;
}