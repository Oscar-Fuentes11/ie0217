#include <iostream>
using namespace std;

// Este programa muestra el uso de herencia en C++ con una clase Animal y una clase derivada Perro.

class Animal {
public:
    void setEdad(int age) {
        edad = age;
    }

    int getEdad() {
        return edad;
    }

protected:
    string nombre;

private:
    int edad;
};

class Perro : public Animal {
public:
    void setNombre(string n) {
        nombre = n;
    }

    string getNombre() {
        return nombre;
    }
};

int main() {
    // Crear un objeto de la clase Perro
    Perro miPerro;

    // Establecer el nombre y edad del perro
    miPerro.setNombre("Toby");
    miPerro.setEdad(3);

    // Imprimir información sobre el perro
    cout << "Mi perro se llama " << miPerro.getNombre() << endl;
    cout << "y tiene " << miPerro.getEdad() << " años." << endl;

    return 0;
}
