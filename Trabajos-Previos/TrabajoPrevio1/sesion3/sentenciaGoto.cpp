#include <iostream>
using namespace std;

int main() {

    // Este programa calcula el promedio de una serie de números ingresados por el usuario.

    float num, average, sum = 0.0;
    int i, n;

    cout << "Número máximo de entradas: ";
    cin >> n;

    for (i = 1; i <= n; ++i) {
        cout << "Ingrese n" << i << ": ";
        cin >> num;

        if (num < 0.0) {
            // Control del programa se mueve a jump si se ingresa un número negativo
            goto jump;
        }

        sum += num;
    }

    jump:

    if (i > 1) {
        average = sum / (i - 1);
        cout << "\nPromedio: " << average;
    } else {
        cout << "\nNo se ingresaron números válidos.";
    }

    return 0;
}
