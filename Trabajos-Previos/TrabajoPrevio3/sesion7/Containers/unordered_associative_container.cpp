#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    // Inicialización de un contenedor asociativo desordenado: unordered_set<int>
    // Los unordered_sets almacenan elementos únicos, pero a diferencia de los sets, no están ordenados.
    unordered_set<int> numbers = {1, 100, 10, 70, 100};

    // Impresión de los elementos del unordered_set
    // El orden de los elementos en un unordered_set no es predecible y puede variar.
    cout << "Numbers are: ";
    for (auto &num: numbers) {
        cout << num << ",";  // El orden de salida no está definido
    }

    // Los unordered_sets son ideales para operaciones de búsqueda, inserción y eliminación rápidas
    // cuando el orden de los elementos no es una preocupación.

    return 0;
}
