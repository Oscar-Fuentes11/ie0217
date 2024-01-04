#include <iostream>

int main() {
    // Este programa verifica el valor de la variable "number".
    // Si "number" es mayor que 0, imprime "Condition 1 is false".
    // Si "number" es igual a 0, imprime "Condition 2 is true".
    // Si ninguna de las condiciones anteriores es verdadera, imprime "All Conditions are false".

    int number = -2;

    if (number > 0) {
        std::cout << "Condition 1 is true" << std::endl;
        // Agrega el código que deseas ejecutar cuando la Condición 1 es verdadera
    } else if (number == 0) {
        std::cout << "Condition 2 is true" << std::endl;
        // Agrega el código que deseas ejecutar cuando la Condición 2 es verdadera
    } else {
        std::cout << "All Conditions are false" << std::endl;
        // Agrega el código que deseas ejecutar cuando ninguna de las condiciones anteriores es verdadera
    }

    // Código después de las condiciones

    return 0;
}
