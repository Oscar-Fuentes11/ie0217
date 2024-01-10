#include <iostream>
using namespace std;

// Clase base 'Animal' que representa características generales de un animal.
class Animal {
public:
    void info() { cout << "I am an animal." << endl; }
};

// Clase derivada 'Dog' que hereda de 'Animal' y añade funcionalidades específicas de un perro.
class Dog : public Animal {
public:
    void bark() { cout << "I am a Dog. Woof woof." << endl; }
};

// Clase derivada 'Cat' que hereda de 'Animal' y añade funcionalidades específicas de un gato.
class Cat : public Animal {
public:
    void meow() { cout << "I am a Cat. Meow." << endl; }
};

int main() {
    // Crear objeto de la clase derivada 'Dog'.
    Dog dog1;
    cout << "Dog Class:" << endl;
    dog1.info(); // Llamar a la función de la clase base
    dog1.bark();

    // Crear objeto de la clase derivada 'Cat'.
    Cat cat1;
    cout << "\nCat Class: " << endl;
    cat1.info(); // Llamar a la función de la clase base
    cat1.meow();

    return 0;
}
