#include <iostream>
using namespace std;

int main() {
    float arr[3];

    // declarar variable puntero
    float *ptr;

    cout << "Mostrando direcciones usando arrays: " << endl;

    // usar bucle for para imprimir direcciones de todos los elementos del array
    for (int i = 0; i < 3; ++i) {
        cout << "&arr[" << i << "] = " << &arr[i] << endl;
    }

    // ptr = &arr[0]
    ptr = arr;

    cout << "\nMostrando direcciones usando punteros: " << endl;

    // usar bucle for para imprimir direcciones de todos los elementos del array
    // usando notación de puntero
    for (int i = 0; i < 3; ++i) {
        cout << "ptr + " << i << " = " << ptr + i << endl;
    }

    return 0;
}
