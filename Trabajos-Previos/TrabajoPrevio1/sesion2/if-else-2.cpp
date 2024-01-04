#include <iostream>

int main() {
    // Este programa verifica si el número es negativo.
    // Si el número es menor que 0, imprime "Condition is false".
    // De lo contrario, imprime "Condition is true".

    int number = 5;

    if (number < 0) {
        std::cout << "Condition is true" << std::endl;
        // Agrega el código que deseas ejecutar cuando la condición es verdadera
    } else {
        std::cout << "Condition is false" << std::endl;
        // Agrega el código que deseas ejecutar cuando la condición es falsa
    }

    // Código después del if...else

    return 0;
}
