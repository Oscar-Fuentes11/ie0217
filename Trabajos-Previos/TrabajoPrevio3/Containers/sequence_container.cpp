#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Inicialización de un contenedor de secuencia: vector<int>
    // Los vectores son contenedores dinámicos que pueden cambiar de tamaño.
    vector<int> numbers = {1, 100, 10, 70, 100};

    // Impresión de los elementos del vector
    // Los vectores permiten un acceso rápido y eficiente a los elementos.
    cout << "Numbers are: ";
    for (auto &num: numbers) {
        cout << num << ",";  // Acceso aleatorio rápido a cada elemento
    }

    // Los vectores son ideales para situaciones donde el tamaño puede variar
    // y se requiere un acceso eficiente a elementos individuales.

    return 0;
}
