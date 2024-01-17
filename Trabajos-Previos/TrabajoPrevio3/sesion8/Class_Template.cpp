#include <iostream>
using namespace std;

// Plantilla de clase para manejar números de cualquier tipo
template <class T>
class Number {
private:
    // Variable privada del tipo genérico T
    T num;

public:
    // Constructor: inicializa num con el valor n
    Number(T n) : num(n) {}

    // Función para obtener el valor de num
    T getNum() { return num; }
};

int main() {
    // Crear un objeto de tipo int con la plantilla Number
    Number<int> numberInt(7);

    // Crear un objeto de tipo double con la plantilla Number
    Number<double> numberDouble(7.7);

    cout << "Número int = " << numberInt.getNum() << endl;
    cout << "Número double = " << numberDouble.getNum() << endl;

    return 0;
}
