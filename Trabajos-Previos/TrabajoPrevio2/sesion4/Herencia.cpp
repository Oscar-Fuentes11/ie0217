#include <iostream>
using namespace std;

// Programa que ilustra la herencia en C++. 
// Define una clase base 'Animal' con funciones eat() y sleep(). 
// Luego, crea una clase derivada 'Dog' que hereda de 'Animal' e incluye la función bark().

class Animal {
public:
    void eat() {
        cout << "I can eat!" << endl;
    }

    void sleep() {
        cout << "I can sleep!" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "I can bark! Woof woof!!" << endl;
    }
};

int main() {
    // Crear un objeto de la clase derivada 'Dog'.
    Dog dog1;

    // Llamar a miembros de la clase base 'Animal'.
    dog1.eat();
    dog1.sleep();

    // Llamar a miembros de la clase derivada 'Dog'.
    dog1.bark();

    return 0;
}
