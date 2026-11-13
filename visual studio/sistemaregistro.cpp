#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string usuario, contrasena;
    string usuarioLogin, contrasenaLogin;

    bool usuarioValido = false;
    bool longitud, mayuscula, especial;

    cout << "=== CREAR CUENTA ===" << endl;

    while (!usuarioValido) {
        cout << "Crea un nombre de usuario: ";
        cin >> usuario;

        if (isupper(static_cast<unsigned char>(usuario[0]))) {
            usuarioValido = true;
        } else {
            cout << "El usuario debe iniciar con mayuscula."
                 << endl;
        }
    }

    do {
        longitud = false;
        mayuscula = false;
        especial = false;

        cout << "Crea una contrasena: ";
        cin >> contrasena;

        if (contrasena.length() >= 8) {
            longitud = true;
        }

        for (int i = 0; i < contrasena.length(); i++) {
            unsigned char caracter = contrasena[i];

            if (isupper(caracter)) {
                mayuscula = true;
            }

            if (!isalnum(caracter)) {
                especial = true;
            }
        }

        if (!longitud || !mayuscula || !especial) {
            cout << "La contrasena no cumple los requisitos."
                 << endl;

            if (!longitud) {
                cout << "- Minimo 8 caracteres." << endl;
            }

            if (!mayuscula) {
                cout << "- Una letra mayuscula." << endl;
            }

            if (!especial) {
                cout << "- Un caracter especial." << endl;
            }
        }

    } while (!longitud || !mayuscula || !especial);

    cout << "\nCuenta creada correctamente." << endl;

    cout << "\n=== INICIAR SESION ===" << endl;

    cout << "Usuario: ";
    cin >> usuarioLogin;

    cout << "Contrasena: ";
    cin >> contrasenaLogin;

    if (usuarioLogin == usuario &&
        contrasenaLogin == contrasena) {

        cout << "\nInicio de sesion exitoso." << endl;
        cout << "Bienvenido, " << usuario << "!";
    } else {
        cout << "\nUsuario o contrasena incorrectos.";
    }

    return 0;
}