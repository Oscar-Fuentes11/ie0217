
# Instrucciones para Ejecutar los Programas

## Ejecutar Programa 1 (Operaciones con Matrices) y 2 (Validación de Correo Electrónico)

Ubícate en el directorio donde está el `Makefile` y ejecuta el siguiente comando en la terminal para compilar y ejecutar el programa 1 que se encuentra en `src/Programa1`:

 make programa1

Ubícate en el directorio donde está el `Makefile` y ejecuta el siguiente comando en la terminal para compilar y ejecutar el programa 2 que se encuentra en `src/Programa2`:

make programa2

Para eliminar los archivos binarios de ambos programas puedes utilizar el comando make clean. 


# Parte Teórica (15 pts)

## Templates

### 1. Definición de Templates
Los templates en C++ son plantillas para escribir código genérico. Permiten a las funciones o clases operar con diferentes tipos de datos.

template <typename T>
T suma(T a, T b) {
    return a + b;
}

### 2. Sobrecarga de Plantillas
La sobrecarga en plantillas permite definir varias funciones con el mismo nombre pero diferentes implementaciones, dependiendo de los tipos de parámetros.

template <typename T>
T mayor(T a, T b) {
    return (a > b) ? a : b;
}

template <typename T>
T mayor(T a, T b, T c) {
    return mayor(mayor(a, b), c);
}

### 3. Plantillas de Clases
Las plantillas de clases permiten definir una clase para trabajar con cualquier tipo de dato, especificado al instanciar la clase.

template <typename T>
class MiContenedor {
public:
    MiContenedor(T valor) : dato(valor) {}
    T obtenerDato() { return dato; }

private:
    T dato;
};

## Excepciones

### 4. Manejo de Excepciones
El manejo de excepciones en C++ utiliza bloques `try`, `catch` y `throw` para capturar y manejar errores de forma segura.

try {
    // Código que puede generar una excepción
    if (condicion) {
        throw MiExcepcion("Mensaje de error");
    }
}
catch (const MiExcepcion& e) {
    // Manejo de la excepción
    cout << "Excepción capturada: " << e.what() << endl;
}

### 5. Excepciones Estándar
Algunas excepciones estándar en C++ son std::runtime_error, std::invalid_argument, y std::out_of_range. Ejemplos de uso incluyen el manejo de errores en tiempo de ejecución, argumentos inválidos y desbordamiento de índices.

### 6. Política de Manejo de Excepciones
Una política de manejo de excepciones define cómo manejar y propagar excepciones en un programa. Es importante considerarla al diseñar software para garantizar un comportamiento robusto y predecible frente a errores.

### 7. Noexcept
La palabra clave noexcept se usa en C++ para especificar que una función no debe lanzar excepciones. Puede usarse en la declaración de una función o en una lambda para indicar que no se producirán excepciones dentro de esa función o lambda.

## STL (Standard Template Library)

### 8. Contenedores STL
Cinco contenedores de la STL son vector, list, map, set, y queue. Se usan en diferentes situaciones: vector para almacenamiento dinámico, list para listas enlazadas, map y set para asociaciones clave-valor, y queue para colas.

### 9. Iteradores en STL
Los iteradores en STL son objetos que permiten recorrer los elementos de un contenedor.Pueden usarse para acceder, modificar o eliminar elementos. Por ejemplo, un vector<int>::iterator se utiliza para recorrer un vector de enteros.

### 10. Algoritmos STL
Ejemplos de algoritmos STL incluyen std::sort para ordenar, std::find para buscar elementos y std::transform para aplicar una función a cada elemento en un rango.

### 11. Algoritmos Personalizados
Los algoritmos personalizados pueden utilizarse en conjunto con contenedores STL para operaciones más específicas.

## Expresiones Regulares

### 12. Definición de Expresiones Regulares
Las expresiones regulares son patrones de texto utilizados para buscar, extraer y manipular cadenas de caracteres. Un ejemplo simple sería la expresión regular para encontrar direcciones de correo electrónico: ^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$.

### 13. Caracteres Especiales
Tres caracteres especiales comunes en expresiones regulares son:

.: Coincide con cualquier carácter excepto el salto de línea.
*: Coincide con cero o más repeticiones del elemento anterior.
+: Coincide con una o más repeticiones del elemento anterior.

### 14. Uso de Expresiones Regulares en C++
En C++, se pueden usar expresiones regulares a través de la biblioteca <regex>. Se pueden crear objetos std::regex, utilizar std::regex_match, y otros métodos para buscar y validar patrones en cadenas de texto.

### 15. Validación de Patrones
Las expresiones regulares son útiles para validar patrones en cadenas de texto porque permiten verificar si una cadena cumple con un formato específico, como direcciones de correo electrónico o números de teléfono. Facilitan la validación y extracción de datos de manera eficiente.
