#include <iostream>
#include <set>

using namespace std;

int main() {
    // Inicialización de un contenedor asociativo: set<int>
    // Los sets almacenan elementos únicos siguiendo un orden específico.
    // En este caso, los duplicados (como el '100' repetido) se eliminarán automáticamente.
    set<int> numbers = {1, 100, 10, 70, 100};

    // Impresión de los elementos del set
    // Los sets se mantienen siempre ordenados, por defecto en orden ascendente.
    cout << "Numbers are: ";
    for (auto &num: numbers) {
        cout << num << ",";  // Los elementos se muestran en orden: 1, 10, 70, 100
    }

    // Los sets son ideales para cuando se necesita mantener un conjunto de elementos únicos
    // y se requiere un acceso eficiente para verificar la presencia de un elemento.

    return 0;
}
