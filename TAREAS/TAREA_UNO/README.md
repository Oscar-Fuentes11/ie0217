## Programa:

El programa implementa un juego interactivo de adivinanzas en C++.El desafío consiste en adivinar un número aleatorio generado dentro de un rango especificado. El juego proporciona dos modos:

Modo Estándar:

Ofrece pistas después de cada intento, indicando si el número buscado es mayor o menor.
El jugador tiene un número limitado de oportunidades para adivinar.

Modo Desafiante:

Proporciona pistas abstractas como "congelado", "frío", "caliente" y "hirviendo" para guiar al jugador.


# Compilar el Programa
make

# Ejecutar el Programa
./bin/adivina.x
Esto iniciará el juego con un rango predeterminado de números. 

# Limpiar Archivos Compilados
make clean


## Parte Teórica (25 pts)

1. Diferencia entre C y C++:
   La principal diferencia entre C y C++ radica en la orientación a objetos. C++ es una extensión de C que incluye características de programación orientada a objetos, como clases y objetos.

2. Diferencias entre compilado e interpretado:
   Un lenguaje compilado se traduce completamente a código máquina antes de la ejecución, mientras que un lenguaje interpretado se traduce línea por línea durante la ejecución. Ejemplos de lenguajes compilados son C y C++, mientras que Python y JavaScript son interpretados. En situaciones donde se busca velocidad y eficiencia, como en software de sistemas, es óptimo utilizar lenguajes compilados. Para scripting y desarrollo rápido, lenguajes interpretados son más adecuados.

3. Linker en un lenguaje compilado:
   Un linker en un lenguaje compilado es responsable de vincular diferentes módulos de código compilado y resolver referencias simbólicas entre ellos. Su función principal es generar un programa ejecutable combinando todos los módulos necesarios. Es esencial en el proceso de compilación para crear un ejecutable funcional.

4. Tipos de datos en C++:
   Los tipos de datos en C++ se dividen en derivados (arrays, punteros, referencias, etc.) y primarios (int, float, char, etc.). Los primarios almacenan valores simples, mientras que los derivados se construyen a partir de estos y permiten estructuras más complejas.

5. Inicializar y declarar una variable:
   Declarar una variable significa especificar su tipo y nombre, mientras que inicializar implica asignarle un valor inicial. Por ejemplo, int x; declara una variable, y x = 5; la inicializa.

6. Sobrecarga de funciones en C++:
   La sobrecarga de funciones en C++ permite definir varias funciones con el mismo nombre pero con diferentes tipos o número de parámetros. Esto mejora la legibilidad y reutilización del código.

7. Punteros en C++:
   Un puntero es una variable que almacena la dirección de memoria de otra variable. Ejemplo: int *p = &x; donde p apunta a la dirección de x.

8. Variables globales y locales:
   Una variable global almacena el valor original de una operación en una función. Se eligen variables globales en ciertos contextos para mantener la persistencia de datos a lo largo del programa.

9. Métodos de la biblioteca string en C++:
   Algunos métodos comunes incluyen length() para obtener la longitud, append() para concatenar y substr() para extraer subcadenas.

10. Diferencia entre do-while y while:
    La principal diferencia es que el bucle do-while se ejecuta al menos una vez, ya que la condición se evalúa al final del bucle.

11. Almacenar funciones en una estructura en C++:
    No es permitido almacenar funciones directamente en una estructura en C++. Sin embargo, se pueden utilizar punteros a funciones.

12. División de código en archivos .hpp, .cpp y main.cpp:
    .hpp contiene declaraciones, .cpp implementaciones, y main.cpp es el punto de entrada del programa.

13. Type Casting en C++:
    Type Casting convierte un tipo de dato a otro. Ejemplo: int x = static_cast<int>(5.67);.

14. Sentencia goto en programación moderna:
    El uso de goto no es recomendable porque complica el código y dificulta la legibilidad. Se pueden lograr los mismos resultados con estructuras de control más estructuradas, como bucles y condicionales.

15. Almacenamiento de variables en C++:
    Las variables locales se almacenan en la pila, mientras que las globales en la memoria dinámica o el heap.

16. Pasar parámetros por valor, por referencia y por puntero:
    - Por valor: Se pasa una copia del valor original.
    - Por referencia: Se pasa la dirección de memoria de la variable.
    - Por puntero: Se pasa el puntero que apunta a la dirección de memoria de la variable.

17. Puntero que apunta a un arreglo en C++:
    Un puntero apunta a la primera posición del arreglo. Se puede acceder a los datos mediante aritmética de punteros.

18. Punteros dobles en C++:
    Los punteros dobles se usan para apuntar a otros punteros. Son útiles para manipular matrices bidimensionales dinámicas.

19. Diferencia entre break y continue:
    break termina el bucle, mientras que continue salta a la siguiente iteración.

20. Directiva #ifndef:
    Evita la inclusión repetida de archivos de encabezado para evitar conflictos de nombres.

21. Puntero this en C++:
    this es un puntero que apunta a la instancia actual de un objeto en C++.

22. Puntero nullptr:
    nullptr es un valor nulo que se utiliza en lugar de NULL en C++11 y versiones posteriores.

23. Diferencia entre arreglo y lista en C++:
    Un arreglo es una estructura de datos estática, mientras que una lista es dinámica y puede crecer o disminuir en tamaño.

24. Función prototipo:
    Un prototipo de función proporciona una declaración anticipada de la función antes de su definición.

25. Memory Leak en C++:
    Un memory leak ocurre cuando la memoria asignada dinámicamente no se libera adecuadamente, lo que puede llevar a agotamiento de recursos.

## Parte Automatización - Makefile (7 pts)

1. Variables en un makefile:
   - CC: Compilador utilizado.
   - CFLAGS: Opciones de compilación para el compilador.
   - CXXFLAGS: Opciones de compilación específicas para C++.
   - LDFLAGS: Opciones de enlace.

2. Componentes de una regla en un Makefile:
   Una regla consta de un objetivo (target), sus prerequisitos y los comandos para construirlo.

3. Target y sus prerequisitos:
   Un target es el resultado que se desea obtener, y los prerequisitos son los archivos necesarios para construir el target. Si alguno de los prerequisitos cambia, el target se reconstruirá.

4. Bandera -I, -c y -o del compilador gcc:
   - -I: Especifica la ruta de búsqueda para los archivos de encabezado.
   - -c: Indica que solo se debe compilar, no enlazar.
   - -o: Especifica el nombre del archivo de salida.

5. Variables en un Makefile:
   Las variables en un Makefile se definen con el formato NOMBRE = valor y se utilizan para simplificar el código y facilitar la actualización.

6. Utilidad de @ en un Makefile:
   @ se utiliza para suprimir la impresión del comando en la salida estándar, haciendo que la ejecución sea más limpia y concisa.

7. Uso de .PHONY en un Makefile:
   .PHONY se utiliza para declarar objetivos que no son archivos, evitando conflictos si accidentalmente se crea un archivo con el mismo nombre.

# Formato Markdown (README.md)

El formato Markdown es un lenguaje de marcado ligero que se utiliza comúnmente para dar formato a archivos de texto. Es fácil de leer y escribir, y se convierte fácilmente a HTML. Ejemplo.
Encabezados;
# Título Principal
## Título Secundario
### Título Terciario
#### Título Cuaternario

Formato Markdown (README.md)

El formato Markdown es un lenguaje de marcado ligero que se utiliza comúnmente para dar formato a archivos de texto. Es fácil de leer y escribir, y se convierte fácilmente a HTML. Aquí hay algunas características y explicaciones sobre cómo utilizar Markdown en un archivo README.md:

Encabezados
markdown
Copy code
# Título Principal
## Título Secundario
### Título Terciario
#### Título Cuaternario
Texto en Negrita e Itálica:
**Texto en Negrita**
*Texto en Itálica*

Listas no ordenadas:
- Elemento 1
- Elemento 2
  - Subelemento 2.1
  - Subelemento 2.2

Listas ordenadas: 
1. Primer Elemento
2. Segundo Elemento
   1. Subelemento 2.1
   2. Subelemento 2.2

Enlaces o imagenes: 
[Enlace a Google](https://www.google.com)

![Texto Alternativo](url_de_la_imagen)

Entre otras. 


# Doxygen y Documentación del Código

Doxygen es una herramienta de generación de documentación para código fuente. Su objetivo principal es facilitar la creación de documentación legible para humanos y máquinas directamente desde el código fuente. 