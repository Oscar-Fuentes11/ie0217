#include <iostream>
using namespace std;

// Clase base 'A' con un método display.
class A {
public:
    void display() {
        cout << "Base class content.";
    }
};

// Clase derivada 'B' que hereda de 'A'.
class B : public A {};

// Clase derivada 'C' que hereda de 'B', logrando herencia múltiple.
class C : public B {};

int main() {
    // Crear un objeto de la clase derivada 'C'.
    C obj;

    // Llamar al método display que proviene de la clase base 'A' a través de la herencia múltiple.
    obj.display();

    return 0;
}
