#include <iostream>
using namespace std;

// Programa que ilustra la creación y manipulación de objetos de la clase Student en C++.

// Definición de la clase Student, que representa a un estudiante con dos calificaciones.
class Student {
public:
    double marks1;  // Primera calificación del estudiante.
    double marks2;  // Segunda calificación del estudiante.
};

// Función que crea y muestra un objeto Student con calificaciones predefinidas.
Student createStudent() {
    // Crear un objeto Student y asignar calificaciones predefinidas.
    Student student;
    student.marks1 = 96.5;
    student.marks2 = 75.0;

    // Mostrar las calificaciones del estudiante creado.
    cout << "Marks 1 = " << student.marks1 << endl;
    cout << "Marks 2 = " << student.marks2 << endl;

    // Devolver el objeto Student creado.
    return student;
}

int main() {
    // Crear un objeto Student en la función principal.
    Student student1;

    // Llamar a la función createStudent para asignar calificaciones y mostrarlas.
    student1 = createStudent();

    // El programa ha terminado con éxito.
    return 0;
}