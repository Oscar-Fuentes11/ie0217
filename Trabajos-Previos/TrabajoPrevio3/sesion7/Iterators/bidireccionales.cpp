#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> nums{1, 2, 3, 4, 5};  // Crear una lista de enteros

    // Inicializar un iterador para apuntar al principio de nums
    list<int>::iterator itr = nums.begin();

    cout << "Moving forward:" << endl;
    // Mostrar los elementos en orden hacia adelante
    while (itr != nums.end()) {
        cout << *itr << ", ";
        itr++;  // Mover el iterador una posición hacia adelante
    }

    cout << endl << "Moving backward: " << endl;
    // Mover el iterador hacia el último elemento para la iteración hacia atrás
    itr--;
    // Mostrar los elementos en orden hacia atrás
    while (itr != nums.begin()) {
        cout << *itr << ", ";
        itr--;  // Mover el iterador una posición hacia atrás
    }
    cout << *itr << endl;  // Mostrar el primer elemento al final

    return 0;
}
