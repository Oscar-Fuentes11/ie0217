***Ejecicion del programa***

1. **Asegúrate de tener el Makefile en el directorio superior al directorio 'src' que contiene tus archivos fuente.**
2. Abre una terminal en el directorio que contiene tu Makefile y el directorio 'src'.

3. Ejecuta el siguiente comando para compilar y ejecutar tu programa:

    ```bash
    make
    ```

   Esto compilará tu programa y lo ejecutará automáticamente.

4. Si deseas compilar y ejecutar por separado, puedes usar los siguientes comandos:

    - Para compilar el programa:

      ```bash
      make $(EXECUTABLE)
      ```

    - Para ejecutar el programa:

      ```bash
      make run
      ```

5. Para limpiar los archivos generados y el ejecutable, puedes utilizar:

    ```bash
    make clean
    ```

   Este comando eliminará el archivo ejecutable generado.

6. Repite el paso 3 siempre que realices cambios en tus archivos fuente y quieras volver a compilar y ejecutar el programa.





***Parte Escrita***

1. **Programación Orientada a Objetos (OOP):**
   - La programación orientada a objetos (OOP) es un paradigma de programación que organiza el código en torno a objetos, que combinan datos y funciones. Sus principios fundamentales son:
     - **Encapsulamiento:** Oculta la implementación interna y expone solo lo necesario.
     - **Herencia:** Permite que una clase herede propiedades y comportamientos de otra.
     - **Polimorfismo:** Permite que un objeto tenga múltiples formas o comportamientos.

2. **Herencia:**
   - La herencia permite que una clase herede atributos y métodos de otra. Ejemplo:
     ```cpp
     class Animal {
     public:
         void comer() { /* código para comer */ }
     };

     class Perro : public Animal {
     public:
         void ladrar() { /* código para ladrar */ }
     };
     ```

3. **Encapsulamiento:**
   - El encapsulamiento oculta los detalles internos de una clase y expone solo lo necesario. Es importante para la seguridad y la modularidad. Ejemplo en C++:
     ```cpp
     class CuentaBancaria {
     private:
         float saldo;

     public:
         void depositar(float cantidad) { /* código para depositar */ }
     };
     ```

4. **Polimorfismo:**
   - Polimorfismo de tipo:
     ```cpp
     class Figura {
     public:
         virtual void dibujar() { /* código para dibujar */ }
     };

     class Circulo : public Figura {
     public:
         void dibujar() override { /* código específico para dibujar un círculo */ }
     };
     ```
     - Polimorfismo de operador: Utilización de operadores con diferentes tipos de datos.

5. **Abstracción:**
   - La abstracción simplifica y enfoca en los aspectos esenciales. En OOP, se logra a través de la creación de clases abstractas. Ejemplo:
     ```cpp
     class Forma {
     public:
         virtual void dibujar() = 0; // Método abstracto
     };
     ```

6. **Clases y Objetos:**
   - Una clase es un plano para crear objetos, mientras que un objeto es una instancia de una clase. Ejemplos:
     ```cpp
     class Coche {
         // Atributos y métodos
     };

     Coche miCoche;  // Objeto de la clase Coche
     ```

7. **Métodos Virtuales:**
   - Los métodos virtuales permiten la implementación de polimorfismo. Son esenciales para las clases base en C++.

8. **Constructores y Destructores:**
   - Constructor: Inicializa objetos de una clase.
     ```cpp
     class Persona {
     public:
         Persona(string nombre) { /* código para inicializar */ }
     };
     ```
   - Destructor: Libera recursos cuando un objeto se destruye.

9. **Sobrecarga de Operadores:**
   - La sobrecarga de operadores permite definir comportamientos personalizados para operadores. Ejemplo:
     ```cpp
     Complex operator+(const Complex& a, const Complex& b) {
         return Complex(a.real + b.real, a.imag + b.imag);
     }
     ```

10. **Templates:**
    - Los templates en C++ permiten la creación de clases o funciones genéricas. Útiles para trabajar con diferentes tipos de datos.

11. **Memoria Dinámica en C++:**
    - La memoria dinámica se asigna durante la ejecución. Comúnmente se usa con `new` y `delete`.

12. **Diferencia entre `new` y `malloc`:**
    - `new` invoca constructores, `malloc` no. `new` devuelve el tipo correcto, `malloc` devuelve `void*`.

13. **Fuga de Memoria (Memory Leak):**
    - Ocurre cuando la memoria asignada no se libera. Se evita liberando la memoria antes de que el programa finalice.

14. **Punteros Inteligentes:**
    - Los smart pointers son objetos que actúan como punteros, pero gestionan automáticamente la memoria. Ejemplo:
      ```cpp
      std::unique_ptr<int> ptr = std::make_unique<int>(42);
      ```

15. **Diferencia entre `delete` y `delete[]`:**
    - `delete` se usa para objetos individuales, `delete[]` para arrays. 

16. **Algoritmo de Ordenamiento:**
    - Un algoritmo que organiza elementos en un orden específico. Importantes para optimizar búsquedas y accesos.

17. **Bubble Sort:**
    - Compara y intercambia elementos adyacentes. Complejidad temporal en el peor caso: O(n^2).

18. **QuickSort:**
    - Algoritmo de ordenamiento eficiente basado en la técnica de divide y vencerás.

19. **Ordenamiento Estable e Inestable:**
    - Estable mantiene el orden relativo de elementos iguales; inestable no. Ejemplo: Bubble Sort es estable, QuickSort no necesariamente.

20. **Merge Sort:**
    - Algoritmo de ordenamiento eficiente basado en la técnica de división y fusión. Complejidad temporal: O(n log n). Preferible para listas enlazadas.
