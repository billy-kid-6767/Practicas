#include <iostream>
#include <cmath>

int main() {

    int opcion;
    double a, b, c;
    double x, y, discriminante;
    double a1, b1, c1, a2, b2, c2;
    double determinante, dx, dy;

    std::cout << "1. Ecuacion lineal" << std::endl;
    std::cout << "2. Ecuacion cuadratica" << std::endl;
    std::cout << "3. Sistema de ecuaciones 2x2" << std::endl;
    std::cout << "Elige una opcion: ";
    std::cin >> opcion;

    switch (opcion) {

        case 1:
            std::cout << "Ecuacion ax + b = 0" << std::endl;
            std::cout << "Ingresa a: ";
            std::cin >> a;
            std::cout << "Ingresa b: ";
            std::cin >> b;

            if (a != 0) {
                x = -b / a;
                std::cout << "Solucion: x = " << x << std::endl;
            }
            else if (b == 0) {
                std::cout << "Hay infinitas soluciones." << std::endl;
            }
            else {
                std::cout << "No hay solucion." << std::endl;
            }
            break;

        case 2:
            std::cout << "Ecuacion ax^2 + bx + c = 0" << std::endl;
            std::cout << "Ingresa a: ";
            std::cin >> a;
            std::cout << "Ingresa b: ";
            std::cin >> b;
            std::cout << "Ingresa c: ";
            std::cin >> c;

            if (a == 0) {
                std::cout << "No es una ecuacion cuadratica." << std::endl;
            }
            else {
                discriminante = b * b - 4 * a * c;

                if (discriminante > 0) {
                    x = (-b + sqrt(discriminante)) / (2 * a);
                    y = (-b - sqrt(discriminante)) / (2 * a);

                    std::cout << "Primera solucion: " << x << std::endl;
                    std::cout << "Segunda solucion: " << y << std::endl;
                }
                else if (discriminante == 0) {
                    x = -b / (2 * a);
                    std::cout << "Solucion unica: " << x << std::endl;
                }
                else {
                    std::cout << "No existen soluciones reales." << std::endl;
                }
            }
            break;

        case 3:
            std::cout << "Sistema: a1*x + b1*y = c1" << std::endl;
            std::cout << "        a2*x + b2*y = c2" << std::endl;

            std::cout << "Ingresa a1, b1 y c1: ";
            std::cin >> a1 >> b1 >> c1;

            std::cout << "Ingresa a2, b2 y c2: ";
            std::cin >> a2 >> b2 >> c2;

            determinante = a1 * b2 - a2 * b1;
            dx = c1 * b2 - c2 * b1;
            dy = a1 * c2 - a2 * c1;

            if (determinante != 0) {
                x = dx / determinante;
                y = dy / determinante;

                std::cout << "x = " << x << std::endl;
                std::cout << "y = " << y << std::endl;
            }
            else if (dx == 0 && dy == 0) {
                std::cout << "El sistema tiene infinitas soluciones." << std::endl;
            }
            else {
                std::cout << "El sistema no tiene solucion." << std::endl;
            }
            break;

        default:
            std::cout << "Opcion no valida." << std::endl;
    }

    return 0;
}