#include <iostream> 
using namespace std;

int main() {
    // declarar variables
    int var1 = 3;
    int var2 = 24;
    int var3 = 17;

    // imprimir la dirección de var1 
    cout << "Dirección de var1: " << &var1 << endl;

    // imprimir la dirección de var2
    cout << "Dirección de var2: " << &var2 << endl;

    // imprimir la dirección de var3
    cout << "Dirección de var3: " << &var3 << endl;

    return 0;
}
