#include <iostream>
#include <map>

using namespace std;

int main() {
    // Inicialización de un contenedor asociativo: map<int, string>
    // Los mapas almacenan pares clave-valor y cada clave es única.
    map<int, string> student;

    // Uso del operador [] para agregar elementos
    // Si la clave ya existe, su valor se sobrescribe.
    student[1] = "Jacqueline";
    student[2] = "Blake";

    // Uso del método insert() para agregar elementos
    // insert() no sobrescribe el valor si la clave ya existe.
    student.insert(make_pair(3, "Denise"));
    student.insert(make_pair(4, "Blake"));

    // Agregar elementos con claves duplicadas
    // El último valor asignado prevalece.
    student[5] = "Timothy";
    student[5] = "Aaron";

    // Iterar a través del mapa
    // Nota: El bucle fallará si hay huecos en las claves.
    for (int i = 1; i <= student.size(); ++i) {
        cout << "Student[" << i << "]: " << student[i] << endl;
    }

    // Los mapas son ideales para cuando necesitas un acceso rápido basado en claves únicas
    // y quieres mantener una relación de uno a uno entre claves y valores.

    return 0;
}
