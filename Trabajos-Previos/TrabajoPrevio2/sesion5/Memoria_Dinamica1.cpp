#include <iostream>
using namespace std;

int main() {
    // Este programa demuestra el uso de punteros y asignación dinámica de memoria

    // Declarar un puntero a int
    int* pointInt;

    // Declarar un puntero a float
    float* pointFloat;

    // Asignar memoria dinámicamente
    pointInt = new int;
    pointFloat = new float;

    // Asignar valores a la memoria
    *pointInt = 45;
    *pointFloat = 45.45f;

    // Imprimir los valores asignados
    cout << "Valor de pointInt: " << *pointInt << endl;
    cout << "Valor de pointFloat: " << *pointFloat << endl;

    // Liberar la memoria asignada
    delete pointInt;
    delete pointFloat;

    return 0;
}
