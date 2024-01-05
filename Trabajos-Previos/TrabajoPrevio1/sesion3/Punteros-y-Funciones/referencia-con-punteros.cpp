#include <iostream>
using namespace std;

// definición de la función para intercambiar números
void swap(int* n1, int* n2) {
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main() {
    // inicializar variables
    int a = 1, b = 2;

    cout << "Antes del intercambio" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "&a = " << &a << endl;  // corregir aquí
    cout << "&b = " << &b << endl;

    // llamar a la función pasando las direcciones de las variables
    swap(&a, &b);

    cout << "\nDespués del intercambio" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
