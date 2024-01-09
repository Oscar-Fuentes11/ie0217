#include <iostream>
using namespace std;

// Programa que demuestra el paso de objetos como parámetros a funciones en C++.

// Definición de la clase Student, que representa a un estudiante con calificaciones.
class Student {
public:
    double marks;  // Calificaciones del estudiante.

    // Constructor que permite inicializar las calificaciones al crear un objeto Student.
    Student(double m) {
        marks = m;
    }
};

// Función que calcula el promedio de las calificaciones de dos estudiantes y lo muestra.
void calculateAverage(Student s1, Student s2) {
    // Calcular el promedio de las calificaciones de los dos estudiantes.
    double average = (s1.marks + s2.marks) / 2;

    // Mostrar el resultado.
    cout << "Average Marks = " << average << endl;
}

int main() {
    // Crear dos objetos de la clase Student con diferentes calificaciones.
    Student student1(88.0), student2(56.0);

    // Llamar a la función calculateAverage y pasar los objetos Student como parámetros.
    calculateAverage(student1, student2);

    return 0;
}
