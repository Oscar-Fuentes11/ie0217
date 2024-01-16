#include <iostream>
#include <stack>

using namespace std;

int main() {
    // Creación de un stack (pila) de enteros
    // Los stacks son contenedores adaptadores que siguen el principio LIFO (Last In, First Out).
    stack<int> numbers;

    // Agregar elementos al stack
    // push() coloca un nuevo elemento en la parte superior del stack.
    numbers.push(1);
    numbers.push(100);
    numbers.push(10);

    cout << "Numbers are: ";

    // Acceder a los elementos extrayendo el elemento superior y sacándolo de la pila
    // hasta que el stack esté vacío.
    while (!numbers.empty()) {
        // Imprimir el elemento superior
        cout << numbers.top() << ", ";

        // Sacar el elemento superior del stack
        numbers.pop();
    }

    // Los stacks son ideales para tareas que requieren un acceso secuencial inverso,
    // donde solo necesitas el último elemento agregado y procesar los elementos en orden inverso.

    return 0;
}
