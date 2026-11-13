#include <iostream>
using namespace std;

int main() {
    int cantidad;

    cout << "Ingresa hasta que numero quieres contar: ";
    cin >> cantidad;

    for (int i = 1; i <= cantidad; i++) {
        cout << i << endl;
    }

    return 0;
}