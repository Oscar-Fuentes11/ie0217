# Ejecutar el Programa

Siga estos pasos para ejecutar el programa de evaluación de alergias:

1. Asegúrese de tener Python 3 instalado en su sistema. Puede descargarlo desde [python.org](https://www.python.org/downloads/).

2. Ubiquese en la siguiente direccion:  /TAREA_CUATRO

3. Ejecute el siguiente comando para entrar al menu del programa:  make


# Análisis de Rendimiento

En el análisis de rendimiento realizado en el programa, se identificaron las funciones que consumen más tiempo y recursos de entre todas las funciones y clases. A continuación, se detallan las funciones identificadas:

1. `calcular_puntuacion_general`: Esta función es la que consume más tiempo en el cálculo de la Evaluación General basada en Tipos de Alergias Ingresadas. Sin embargo, el tiempo que consume es muy bajo, en el rango de microsegundos.

2. `built-in method builtins.sum`: Esta función se utiliza para calcular la puntuación total combinada de las alergias. También consume muy poco tiempo.



## Aumento de la Cantidad de Puntuación

Se ejecutó las opciones `ingresar_puntuación_general`, `Agregar nueva alergia al sistema`y `Mostrar ambas evaluaciones` (Estas utilizan todas las funciones del programa y se puede medir el rendimiento general) con diferentes valores de puntuación, aumentando la cantidad. Los resultados obtenidos fueron los siguientes:

- Cuando se ingresó una puntuación de 10, se obtuvo un tiempo para evaluar alergias de : 3.9000042306724936e-07 segundos

- Cuando se ingresó una puntuación de 100000000000000000000000000000000000000000000000000, se obtuvo un tiempo para evaluar alergias de : 3.899986040778458e-07 segundos
- Cuando se agrego una nueva alergia con un puntuaje de 14 se obtuvo un tiempo para agregar alergia de: 8.457000149064697e-06 segundos

- Cuando se agrego una nueva alergia con un puntuaje de 232323232323232323232323232323232323 se obtuvo un tiempo para agregar alergia de: 9.890000001178123e-06 segundos

### Conclusiones

Según el análisis de rendimiento, se observa que el tiempo de ejecución de la función `ingresar_puntuacion_general` se mantiene en un rango muy bajo y constante, independientemente del aumento en la cantidad de puntuación ingresada. Esto indica que las funciones son altamente eficientes y no presentan un aumento significativo en el tiempo de ejecución a medida que se procesan puntuaciones más grandes.


# Parte Teorica

1. **Diferencia entre una lista y una tupla en Python:**
   - Una lista es una colección ordenada y mutable de elementos en Python, lo que significa que se pueden agregar, eliminar o modificar elementos después de su creación utilizando índices.
   - Una tupla es similar a una lista en cuanto a que es una colección ordenada de elementos, pero a diferencia de las listas, las tuplas son inmutables, lo que significa que no se pueden modificar después de su creación.

2. **Sobrecarga de operadores en Python:**
   - La sobrecarga de operadores se refiere a la capacidad de definir comportamientos personalizados para operadores en clases definidas por el usuario.
   - Se implementa en Python mediante la definición de métodos especiales en una clase, como `__add__` para la adición, `__sub__` para la resta, etc. Estos métodos permiten definir cómo se deben comportar los operadores cuando se aplican a objetos de esa clase.

3. **Alcance (scope) de una variable en Python:**
   - El alcance se refiere a la región del programa en la que una variable es visible y puede ser referenciada.
   - En Python, el alcance de una variable se determina por las reglas de ámbito local y global. Las variables definidas dentro de una función tienen un ámbito local y no son visibles fuera de esa función, mientras que las variables definidas fuera de todas las funciones tienen un ámbito global y son visibles en todo el programa.

4. **Decorador en Python:**
   - Un decorador en Python es una función que se utiliza para modificar o extender el comportamiento de otra función o método sin cambiar su código fuente.
   - La función principal de un decorador es envolver una función existente y agregar funcionalidad adicional antes o después de la ejecución de la función original.

5. **Gestión de excepciones en Python:**
   - Las excepciones se gestionan mediante bloques `try`, `except` y opcionalmente `finally`.
   - Ejemplo:
     ```python
     try:
         
         resultado = 10 / 0
     except ZeroDivisionError as e:
         print(f"Error: {e}")
     finally:
         print("Este bloque se ejecuta siempre")
     ```

6. **Generadores en Python:**
   - Un generador es una función especial que permite crear secuencias de valores de manera eficiente.
   - Se utilizan para generar valores bajo demanda en lugar de almacenar todos los valores en la memoria.
   - Se definen con una función que contiene la palabra clave `yield`.

7. **Diferencia entre `__init__` y `__call__` en clases de Python:**
   - `__init__` es un método especial llamado cuando se crea una instancia de una clase. Se utiliza para inicializar los atributos de la instancia.
   - `__call__` es un método especial que permite que una instancia de una clase se comporte como una función cuando se llama. Puede aceptar argumentos y realizar acciones adicionales.

8. **Organización de módulos y paquetes en Python:**
   - Los módulos son archivos de Python que contienen código reutilizable.
   - Los paquetes son carpetas que contienen módulos relacionados. Deben incluir un archivo `__init__.py` para que Python los reconozca como paquetes.
   - Los paquetes pueden contener subpaquetes y módulos anidados.

9. **Diferencia entre `append()` y `extend()` en listas de Python:**
   - `append()` se utiliza para agregar un elemento al final de una lista.
   - `extend()` se utiliza para agregar los elementos de una iterable (como una lista o tupla) al final de una lista existente.

10. **Diferencia entre método de clase y método estático en Python:**
    - Un método de clase se asocia a la clase y puede acceder y modificar atributos de clase. Se define con el decorador `@classmethod`.
    - Un método estático no se asocia a la instancia o la clase y generalmente se utiliza para funcionalidad relacionada con la clase que no necesita acceder a atributos específicos de la instancia o la clase. Se define con el decorador `@staticmethod`.

11. **Diferencia entre herencia simple y herencia múltiple en Python:**
    - La herencia simple permite que una clase herede de una única clase base.
    - La herencia múltiple permite que una clase herede de múltiples clases base. Python admite herencia múltiple, lo que significa que una clase puede heredar atributos y métodos de varias clases base.

12. **Manejo de errores de importación de módulos en Python:**
    - Python generará una excepción `ModuleNotFoundError` si intenta importar un módulo que no existe.
    - Puede manejar esta excepción utilizando un bloque `try` y `except` para proporcionar un mensaje de error personalizado o tomar acciones específicas en caso de que el módulo no se pueda importar.

13. **Diferencia entre una clase y un objeto en Python:**
    - Una clase es una plantilla o un plano para crear objetos. Define atributos y métodos que los objetos de esa clase tendrán.
    - Un objeto es una instancia concreta de una clase. Es una entidad que tiene atributos específicos y puede realizar acciones definidas en la clase.

14. **Diferencia entre una clase abstracta y una interfaz en Python:**
    - Una clase abstracta es una clase que no se puede instanciar directamente y generalmente contiene métodos abstractos que deben ser implementados por las clases derivadas.
    - Una interfaz en Python se define utilizando clases abstractas y se utiliza para definir un conjunto de métodos que deben ser implementados por cualquier clase que la herede.

15. **Sobreescritura de métodos en Python:**
    - La sobreescritura de métodos se refiere a la capacidad de una clase derivada para proporcionar su propia implementación de un método que ya está definido en la clase base.
    - Se realiza definiendo un método con el mismo nombre en la clase derivada, lo que anulará el comportamiento del método en la clase base.



