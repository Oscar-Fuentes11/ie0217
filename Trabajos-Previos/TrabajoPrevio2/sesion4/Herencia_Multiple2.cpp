#include <iostream>
using namespace std;

// Clase base 'Mammal' que representa mamíferos.
class Mammal {
public:
    Mammal() {
        cout << "Mammals can give direct birth." << endl;
    }
};

// Clase base 'WingedAnimal' que representa animales alados.
class WingedAnimal {
public:
    WingedAnimal() {
        cout << "Winged animals can flap." << endl;
    }
};

// Clase derivada 'Bat' que hereda de ambas clases 'Mammal' y 'WingedAnimal', logrando herencia múltiple.
class Bat : public Mammal, public WingedAnimal {};

int main() {
    // Crear un objeto de la clase derivada 'Bat'.
    Bat b1;

    return 0;
}
