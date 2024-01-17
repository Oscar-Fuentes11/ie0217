#include <iostream>
using namespace std;

// Función de plantilla para sumar
template <typename T>
T add(T num1, T num2){
    // Devuelve la suma de dos números
    return (num1 + num2);
} 

int main(){
    int result1;
    double result2;

    // Llamando a la función de plantilla con parámetros de tipo int
    result1 = add<int>(2, 3);
    cout << "2 + 3 = " << result1 << endl;

    // Llamando a la función de plantilla con parámetros de tipo double
    result2 = add<double>(2.2, 3.3);
    cout << "2.2 + 3.3 = " << result2 << endl;

    return 0;
}
