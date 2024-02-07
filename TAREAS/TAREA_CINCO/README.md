# Ejecucion de los programas

## Requisitos

- Python 3.x
- Pandas
- Matplotlib
- Modulo openpyxl
- OS

## Instrucciones de Ejecución

1. Clona el repositorio o descarga los archivos necesarios.
2. Asegúrate de tener instalados Python 3.x, Pandas, Matplotlib y os.
3. Abre una terminal y navega hasta el directorio del proyecto, en donde se encuentra el Makefile (/TAREA_CINCO).

### Ejecutar el programa


El comando `make` se encargará de ejecutar el programa y generar las visualizaciones gráficas asi como los datos en terminal. 


# Programa 1
## 6. Interpretación de Resultados

Los datos analizados revelan tendencias significativas en las emisiones de combustible a lo largo de las últimas décadas. Como se muestra en el "Gráfico de Barras", hay un notable aumento en las emisiones de combustible en los años recientes, con un pico particularmente alto en el último año registrado. Este pico puede estar relacionado con el aumento en la demanda de vehículos eléctricos, lo que sugiere la necesidad de políticas más estrictas de regulación de emisiones y una transición más rápida hacia fuentes de energía más limpias.

Por otro lado, el "Gráfico de Dispersión" muestra la relación entre las emisiones de combustible y el tiempo, resaltando cómo la dispersión de las emisiones ha aumentado con el tiempo. Esto podría indicar una mayor variabilidad en las emisiones anuales, lo cual es un punto de interés para investigadores y formuladores de políticas ambientales.

Además, el "Gráfico de Líneas" presenta la tendencia general de las emisiones de combustible a lo largo del tiempo. Se observa una tendencia fluctuante con una subida general hacia los años más recientes. Este patrón sugiere la necesidad de implementar medidas más efectivas para reducir las emisiones y mitigar los impactos ambientales.

### Conclusiones y Observaciones

Basados en el análisis, podemos concluir que las emisiones de combustible han experimentado un incremento general, con una mayor variabilidad en las emisiones anuales. Estos hallazgos son cruciales para el desarrollo de estrategias de sostenibilidad ambiental y la toma de decisiones políticas informadas.

### Posibles Aplicaciones de los Hallazgos

Los hallazgos pueden ser aplicados en diversos campos. Por ejemplo, pueden informar la elaboración de políticas ambientales más efectivas, contribuir al desarrollo de tecnologías de energía más limpia y proporcionar una base para la investigación sobre los efectos de las emisiones en la salud pública y el medio ambiente. La evidencia de una variabilidad creciente en las emisiones anuales es especialmente útil para comprender mejor los patrones climáticos y la efectividad de las estrategias de mitigación del cambio climático.





# Parte Teorica

### Iteradores

1. **¿Qué es un iterador en Python y cuál es su propósito?**
   - Un iterador en Python es un objeto que permite recorrer elementos secuenciales uno por uno. Su propósito es proporcionar un mecanismo para acceder a los elementos de una secuencia sin necesidad de conocer la estructura subyacente de los datos.

2. **Explica la diferencia entre un iterable y un iterador.**
   - Un iterable es cualquier objeto en Python que se puede recorrer mediante un bucle (por ejemplo, listas, tuplas, diccionarios, etc.). Un iterador es un objeto que permite el acceso secuencial a los elementos de un iterable, manteniendo su estado interno para rastrear la posición actual.

### Excepciones

1. **Define qué es una excepción en Python.**
   - Una excepción en Python es un evento que ocurre durante la ejecución de un programa y que interrumpe el flujo normal de ejecución debido a algún error o condición inesperada.

2. **¿Cuál es el propósito de la cláusula try...except en el manejo de excepciones?**
   - El propósito de la cláusula `try...except` es manejar excepciones y errores que pueden surgir durante la ejecución de un bloque de código. Permite capturar y manejar las excepciones de manera controlada, evitando que el programa se detenga abruptamente.

3. **Explica la diferencia entre las cláusulas except y finally en el manejo de excepciones.**
   - La cláusula `except` se utiliza para manejar excepciones específicas que pueden ocurrir dentro de un bloque de código `try`. Por otro lado, la cláusula `finally` se ejecuta siempre, ya sea que se haya producido una excepción o no, y se utiliza para realizar acciones de limpieza o liberación de recursos.

### Generadores

1. **¿Qué es un generador en Python y cuál es su ventaja sobre las listas tradicionales?**
   - Un generador en Python es una función que devuelve un iterador que genera valores sobre la marcha. Su ventaja sobre las listas tradicionales radica en que no almacena todos los valores en la memoria de una vez, lo que lo hace más eficiente en términos de uso de memoria.

2. **Explica cómo se puede crear un generador usando la función yield.**
   - Se puede crear un generador en Python utilizando la palabra clave `yield` en una función en lugar de `return`. Cuando se encuentra la declaración `yield` en una función, esta función se convierte automáticamente en un generador. Cada vez que se llama a `yield`, el generador se suspende y devuelve el valor, conservando su estado interno para la próxima llamada.

3. **¿Cuándo es más apropiado usar generadores en lugar de listas?**
   - Es más apropiado usar generadores en lugar de listas cuando necesitamos generar una secuencia de valores de manera eficiente y no queremos almacenar todos los valores en la memoria simultáneamente. Esto es especialmente útil cuando trabajamos con conjuntos de datos grandes o cuando solo necesitamos acceder a los valores uno por uno.

### Pandas

1. **¿Cuál es la diferencia entre una Serie y un DataFrame en Pandas?**
   - Una Serie es una estructura de datos unidimensional en Pandas, similar a una matriz unidimensional o una columna en una tabla, mientras que un DataFrame es una estructura de datos bidimensional que contiene filas y columnas, similar a una tabla de base de datos o una hoja de cálculo.

2. **Explica cómo manejar valores nulos o faltantes en un DataFrame.**
   - En Pandas, los valores nulos o faltantes se pueden manejar utilizando el método `fillna()` para rellenar los valores nulos con un valor específico, o `dropna()` para eliminar las filas o columnas que contienen valores nulos.

3. **¿Cuál es la diferencia entre loc y iloc en Pandas?**
   - `loc` se utiliza para acceder a filas y columnas por etiquetas o booleanos, mientras que `iloc` se utiliza para acceder a filas y columnas por índices enteros. Es decir, `loc` se utiliza con nombres de filas o columnas, mientras que `iloc` se utiliza con índices enteros.
