#include <iostream>
using namespace std;

int main() {
    // Este programa solicita el número total de estudiantes, asigna dinámicamente memoria para almacenar sus GPAs,
    // ingresa los GPAs de los estudiantes, muestra los GPAs y finalmente libera la memoria asignada.

    int num;
    cout << "Enter total number of students: ";
    cin >> num;

    float* ptr;

    // Asignar memoria para num números de floats
    ptr = new float[num];

    cout << "Enter GPA of students." << endl;

    for (int i = 0; i < num; ++i) {
        cout << "Student " << i + 1 << ": ";
        cin >> *(ptr + i);
    }

    cout << "\nDisplaying GPA of students." << endl;

    for (int i = 0; i < num; ++i) {
        cout << "Student " << i + 1 << ": " << *(ptr + i) << endl;
    }

    // Liberar la memoria asignada para el arreglo de GPAs
    delete[] ptr;

    return 0;
}
