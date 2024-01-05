#include <iostream>

using namespace std;

int main() {
    int var = 5;

    // declarar variable puntero
    int *pointVar;

    // almacenar la dirección de var en pointVar
    pointVar = &var;

    // imprimir el valor de var
    cout << "var = " << var << endl;

    // imprimir la dirección de var
    cout << "Dirección de var (&var) = " << &var << endl << endl;

    // imprimir el puntero pointVar
    cout << "pointVar = " << pointVar << endl;

    // imprimir el contenido de la dirección a la que apunta pointVar
    cout << "Contenido de la dirección apuntada por pointVar (*pointVar) = " << *pointVar << endl;

    return 0;
}
