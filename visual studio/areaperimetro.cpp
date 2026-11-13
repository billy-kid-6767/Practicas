#include <iostream>

int main() {

    int lados;
    double longitud, apotema, perimetro, area;

    std::cout << "Ingresa el numero de lados del poligono: ";
    std::cin >> lados;

    if (lados < 3) {
        std::cout << "El poligono debe tener al menos 3 lados." << std::endl;
    }
    else {
        std::cout << "Ingresa la longitud de un lado: ";
        std::cin >> longitud;

        std::cout << "Ingresa la apotema: ";
        std::cin >> apotema;

        if (longitud <= 0 || apotema <= 0) {
            std::cout << "Las medidas deben ser positivas." << std::endl;
        }
        else {
            perimetro = lados * longitud;
            area = (perimetro * apotema) / 2;

            std::cout << "Perimetro: " << perimetro << std::endl;
            std::cout << "Area: " << area << std::endl;
        }
    }

    return 0;
}