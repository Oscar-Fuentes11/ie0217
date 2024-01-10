#include <iostream>
using namespace std;

class Student {
private:
    int age; 
public:
    // Constructor que inicializa la edad a 12
    Student(): age(12) {}

    void getAge() {
        cout << "Age = " << age << endl;
    }
};

int main() {
    // Este programa demuestra la creación dinámica de un objeto de la clase Student,
    // la llamada a la función getAge() y la liberación de la memoria asignada.

    // Declarar dinámicamente un objeto de la clase Student
    Student* ptr = new Student();

    // Llamar a la función getAge()
    ptr->getAge();

    // Liberar la memoria asignada
    delete ptr;

    return 0;
}
