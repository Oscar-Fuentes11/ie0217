#include <iostream>
#include <string>
using namespace std;

// Clase base 'Animal' que representa características generales de un animal.
class Animal {
private:
    string color; // Miembro privado para el color del animal.

protected:
    string type; // Miembro protegido para el tipo de animal.

public:
    void run() { cout << "I can run BASE!" << endl; }
    void eat() { cout << "I can eat!" << endl; }
    void sleep() { cout << "I can sleep!" << endl; }

    void setColor(string clr) { color = clr; }
    string getColor() { return color; }
};

// Clase derivada 'Dog' que hereda de 'Animal' y añade funcionalidades específicas de un perro.
class Dog : public Animal {
public:
    void run() { cout << "I can run DERIVED!" << endl; }
    void setType(string tp) { type = tp; }

    // Método que muestra información sobre el perro, incluyendo el color.
    void displayInfo(string c) {
        cout << "I am a " << type << endl;
        cout << "My color is " << c << endl;
    }

    // Método adicional específico de un perro.
    void bark() { cout << "I can bark! Woof woof!!" << endl; }
};

int main() {
    Dog dog1;
    dog1.run();
    dog1.eat();
    dog1.sleep();
    dog1.setColor("black");
    dog1.bark();
    dog1.setType("Doberman");
    dog1.displayInfo(dog1.getColor());

    return 0;
}
