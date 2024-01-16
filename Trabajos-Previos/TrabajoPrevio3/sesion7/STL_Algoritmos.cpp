// sort algorithm example
#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector>       // std::vector

// Definición de una función de comparación que compara dos enteros
bool myfunction(int i, int j) { return (i < j); }

// Definición de una estructura con un operador de comparación para comparar dos enteros
struct myclass {
  bool operator()(int i, int j) { return (i < j); }
} myobject;

int main() {
  // Array de enteros para demostración
  int myints[] = {32, 71, 12, 45, 26, 80, 53, 33};
  // Creación de un vector e inicialización con el array de enteros
  std::vector<int> myvector(myints, myints + 8);

  // Ordenando la primera mitad del vector usando la comparación por defecto
  std::sort(myvector.begin(), myvector.begin() + 4);

  // Ordenando la segunda mitad del vector usando la función de comparación personalizada
  std::sort(myvector.begin() + 4, myvector.end(), myfunction);

  // Ordenando el vector completo usando el objeto de comparación personalizado
  std::sort(myvector.begin(), myvector.end(), myobject);

  // Imprimiendo el contenido del vector ordenado
  std::cout << "myvector contains:";
  for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';
  
  return 0;
}
