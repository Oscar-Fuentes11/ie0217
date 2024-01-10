#include <iostream>
using namespace std;

// Declaración anticipada de la clase Distance para que la función addFive pueda usarla como parámetro.
class Distance;

// Función amiga que puede acceder a los miembros privados de la clase Distance.
int addFive(Distance);

class Distance {
private:
    int meter;

    // Declarar la función amiga como friend para que pueda acceder a los miembros privados.
    friend int addFive(Distance);

public:
    Distance() : meter(0) {}
};

// Definir la función amiga que puede acceder a los miembros privados de la clase Distance.
int addFive(Distance d) {
    d.meter += 5;
    return d.meter;
}

int main() {
    Distance D;

    // Imprimir el resultado de la función amiga addFive.
    cout << "Distance: " << addFive(D);

    return 0;
}
