#include <iostream>
#include <forward_list> 
using namespace std;

int main() {
    forward_list<int> nums{1, 2, 3, 4};  // Crear una forward_list de enteros

    // Inicializar un iterador para apuntar al principio de la lista
    forward_list<int>::iterator itr = nums.begin();

    while (itr != nums.end()) {
        int original_value = *itr;  // Acceder al valor actual del iterador
        *itr = original_value * 2;  // Duplicar el valor
        itr++;  // Avanzar el iterador
    }

    // Mostrar los contenidos de nums
    for (int num : nums) {
        cout << num << " ";
    }

    return 0;
}
