#include <iostream>

int main() {
    // Este programa verifica si el número es positivo.
    // Si el número es mayor que 0, ejecuta el código dentro del bloque if.
    // De lo contrario, ejecuta el código dentro del bloque else.

    int number = 5;

    if (number > 0) {
        std::cout << "Condition is true" << std::endl;
        // Agrega el código que deseas ejecutar cuando la condición es verdadera
    } else {
        std::cout << "Condition is false" << std::endl;
        // Agrega el código que deseas ejecutar cuando la condición es falsa
    }

    // Código después del if...else

    return 0;
}
