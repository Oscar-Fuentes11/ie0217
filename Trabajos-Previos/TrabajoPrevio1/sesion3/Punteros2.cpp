#include <iostream>
using namespace std;

int main() {
    int var = 5;
    int* pointVar;

    // almacenar la dirección de var en pointVar
    pointVar = &var;

    // imprimir var
    cout << "var = " << var << endl;

    // imprimir *pointVar
    cout << "*pointVar = " << *pointVar << endl << endl;

    cout << "Cambiando el valor de var a 7:" << endl;

    // cambiar el valor de var a 7
    var = 7;

    // imprimir var
    cout << "var = " << var << endl;

    // imprimir *pointVar
    cout << "*pointVar = " << *pointVar << endl << endl;

    cout << "Cambiando el valor de *pointVar a 16:" << endl;

    // cambiar el valor de *pointVar a 16
    *pointVar = 16;

    // imprimir var
    cout << "var = " << var << endl;

    // imprimir *pointVar
    cout << "*pointVar = " << *pointVar << endl;

    return 0;
}
