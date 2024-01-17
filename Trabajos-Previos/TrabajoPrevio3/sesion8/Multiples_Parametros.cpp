#include <iostream>
using namespace std;

// Plantilla de clase con parámetros múltiples y parámetros por defecto.
// Permite la creación de objetos que almacenan hasta tres valores de tipos potencialmente diferentes.
template <class T, class U, class V = char>
class ClassTemplate {
private:
    T var1; 
    U var2; 
    V var3; 

public:
    // Constructor que inicializa las variables. var3 tiene un valor por defecto.
    ClassTemplate(T v1, U v2, V v3 = V()) : var1(v1), var2(v2), var3(v3) {}

    // Método para imprimir los valores de las variables.
    // Muestra cómo se puede acceder y utilizar los miembros de una instancia de la plantilla.
    void printVar() {
        cout << "var1 = " << var1 << endl;
        cout << "var2 = " << var2 << endl;
        cout << "var3 = " << var3 << endl;
    }
};

int main() {
    // Crear un objeto con tipos int, double y char
    ClassTemplate<int, double> obj1(7, 7.7, 'c');
    cout << "Valores de obj1: " << endl;
    obj1.printVar();

    // Crear un objeto con tipos double, char y bool
    ClassTemplate<double, char, bool> obj2(8.8, 'a', false);
    cout << "\nValores de obj2: " << endl;
    obj2.printVar();

    return 0;
}
