# Instrucciones de uso para el programa
- Para la ejecucion del programa utilice el comando make run desde el directorio donde se encuentra el Makefile, si tiene algun problema ejecutando el comando debido al compilador utilizado, tenga en cuenta que lo unico que se debe ejecutar es el archivo main.py cuyo path es ./src/INFOHERE/main.py

- Es importante mencionar que debe tener el archivo kaggle.json en su carpeta .kaggle para realizar la autenticacion, si no es asi, de igual forma se adjunta el archivo .csv en el directorio. Puede verificar que la descarga funciona eliminando dicho archivo y descargandolo de nuevo.

- Al iniciar el programa, se desplegara en consola un breve analisis del dataframe y comandos relacionados a la limpieza de datos. 

- La primera ventana muestra un analisis de regresion lineal del precio de venta en funcion del modelo (año), tambien se imprimen en consola los resultados de la evaluacion de rendimiento para cada caso.

- La segunda ventana que se abre muestra un analisis de regresion lineal del precio de venta en funcion del kilometraje del auto.

- Las siguientes dos ventanas comparan las mismas columnas pero utilizando un analisis de regresion no lineal, con un polinomio de grado 2.

- Luego se utiliza el metodo del codo y de Silhouette para determinar el numero optimo de cluster, donde se decide utilizar 3, debido a los resultados de ambas graficas, principalmente a la grafica del metodo de Silhouette, pues el punto mas alto es 3.

- Finalmente se utiliza 3 como el numero de clusters y se hace una visualizacion de clusters con PCA.

# Analisis de resultados

En el análisis de la primera regresión lineal, que relaciona el precio de venta con el año del vehículo, se notan discrepancias en algunos puntos que sobrepasan significativamente la línea de regresión, sugiriendo que el patrón podría ser cuadrático o incluso exponencial, ya que los autos más recientes suelen tener precios considerablemente altos.

Respecto a la segunda regresión lineal, que compara el precio de venta con el kilometraje del coche, se detectan puntos que desvían de la línea predicha. Esto refleja la tendencia lógica de que a mayor kilometraje, menor es el valor de venta del vehículo.

En el caso de las regresiones no lineales, los resultados tampoco fueron completamente precisos, indicando que tal vez sería beneficioso aplicar un polinomio de mayor grado para una mejor interpretación de los datos.

Al buscar el número ideal de clusters, se emplearon dos técnicas, concluyendo que tres es el número óptimo. El método del codo identifica este valor en el punto donde la curva forma un "codo" (notoriamente cerca de tres), mientras que el método Silhouette selecciona la cantidad de clusters que optimiza el promedio del coeficiente de Silhouette para todos los puntos.




# Respuestas a las preguntas de teoria

## Regresion 

1. ¿Que es la regresion lineal y como se diferencia de la regresion no lineal?
Este método estadístico se basa en el análisis de cómo se relacionan entre sí las variables dependientes e independientes, formulando dicha relación mediante una ecuación lineal de la forma y = a + bx. Lo que distingue a la regresión lineal de la regresión no lineal es que la primera presupone que la conexión entre las variables se puede describir con una línea recta, es decir, su naturaleza es lineal. Por otro lado, la regresión no lineal tiene la capacidad de ajustarse a relaciones más complejas que no se ajustan a una representación lineal, utilizando para ello modelos que pueden ser de tipo polinomial, logarítmico o exponencial, entre otros, sin limitarse a una estructura específica.

2. ¿Que son los coeficientes de regresion y que informacion proporcionan sobre la relacion
entre las variables?
En la regresión, los coeficientes muestran cómo las variables independientes afectan a la dependiente, reflejando su relación. En la regresión lineal, estos coeficientes determinan la pendiente e intersección de la línea de regresión, revelando tanto la fuerza como la dirección del vínculo entre variables. La pendiente señala el cambio en la variable dependiente por cada cambio unitario en la independiente, y la intersección, el valor de la dependiente cuando la independiente es cero.

3. ¿Que es el error cuadratico medio (MSE) y como se utiliza para evaluar la precision
de un modelo de regresion?
El MSE se trata de una medida que indica la precisión de un modelo de regresión al comparar las predicciones del modelo con los valores reales, siendo esta el ajuste de un modelo de regresión. Se calcula como la media de los cuadrados de las diferencias entre los valores observados y los valores predichos por el modelo. Un MSE más bajo indica un mejor ajuste del modelo a los datos observados, ya que significa que las predicciones del modelo están más cerca de los valores reales. Es comúnmente utilizado para evaluar la precisión de un modelo de regresión comparado con otros.

4. ¿Cual es la diferencia entre regresion simple y regresion multiple y cuando se utiliza
cada una?
La regresión lineal simple usa solamente una variable independiente para predecir la variable dependiente. Es útil cuando se estudia la relación entre solamente dos variables específicas. Mientras que la múltiple involucra múltiples variables independientes para predecir la variable dependiente. Es más compleja, pero permite considerar efectos conjuntos de varias variables, también se utiliza para controlar el efecto de variables adicionales en la relación entre las variables principales.

## Clusterig 

1. ¿Que es el clustering y cual es su objetivo principal en el analisis de datos?
El clustering es una técnica de análisis de datos que consiste en agrupar un conjunto de objetos de manera que los objetos dentro de un mismo grupo (o cluster) sean más similares entre sí que con los objetos de otros grupos. 
El objetivo principal del clustering es encontrar patrones o estructuras intrínsecas en los datos y segmentarlos en grupos significativos que puedan ayudar en la interpretación y comprensión de los datos. Esta técnica también es utilizada como técnica de aprendizaje automático no supervisado.

2. Describa brevemente los algoritmos K-Means y DBSCAN y como funcionan.
El algoritmo k-means es una técnica de agrupamiento que clasifica los puntos de datos en K grupos según sus características. Inicia seleccionando K centroides de forma aleatoria como representantes de los grupos, asigna cada punto al centroide más próximo, recalcula los centroides basándose en las asignaciones, y repite este proceso hasta que los centroides estabilicen su posición.
Por otro lado, DBSCAN, acrónimo de Density-Based Spatial Clustering of Applications with Noise, es un algoritmo de agrupamiento por densidad que identifica conglomerados en zonas de alta densidad, separados por áreas menos densas. Determina regiones densas y expande los grupos desde estos puntos, clasificando puntos cercanos basándose en un límite de distancia y un mínimo de puntos vecinos, lo que le permite gestionar eficazmente el ruido y detectar valores atípicos.

3. ¿Que es la inercia en el contexto del clustering y como se utiliza para evaluar la calidad
de un agrupamiento?
La inercia, en el contexto del algoritmo K-Means, es una medida que evalúa cuán bien se ha realizado el agrupamiento, basándose en la suma de las distancias cuadradas de los puntos a sus centroides respectivos. El objetivo es reducir la inercia para formar clústeres más densos, lo que indica una clara distinción entre ellos. Esta métrica es clave para determinar la cantidad ideal de clústeres, escogiendo aquel número que resulte en la mínima inercia y, por ende, en agrupaciones de alta calidad.

4. ¿Que son los centroides y como se utilizan en el algoritmo K-Means?
Los centroides son puntos que representan el centro de cada cluster en el algoritmo K-Means. En cada iteración del algoritmo, los centroides se actualizan recalculando el promedio de todas las observaciones asignadas a ese cluster. Luego, los puntos de datos se reasignan al centroide más cercano en función de las distancias euclidianas. Este proceso se repite hasta que los centroides convergen y los clusters no cambian significativamente.

5. Escriba la diferencia entre datos estructurados y no estructurados para analisi de datos.
Los datos estructurados se organizan en formatos claros como tablas, facilitando su análisis mediante algoritmos estadísticos y de machine learning. Por otro lado, los datos no estructurados, que abarcan desde texto hasta video, carecen de un formato fijo y demandan métodos de análisis avanzados, como NLP para texto o visión computacional para imágenes.

## Paquetes en Python __init__.py

1. ¿Que es un paquete en Python y como se diferencia de un modulo?
Un paquete es un directorio que agrupa módulos y posiblemente otros paquetes, organizando código reutilizable en una estructura jerárquica. Mientras que un módulo es simplemente un archivo Python con código, los paquetes facilitan la organización y el agrupamiento de módulos afines para mejorar la estructura del proyecto.

2. ¿Cual es la funcion del archivo \_\_init\_\_.py dentro de un paquete de Python?
Este se usa para realizar configuraciones de importación dentro de un paquete. Este archivo indica que el directorio que lo contiene es un paquete y puede contener código inicialización u otras configuraciones relevantes para el paquete. Este archivo también se ejecuta automáticamente cuando se importa el paquete.

3. ¿Como se importa un modulo o funcion desde un paquete en Python?
Para comenzar, se utiliza la palabra clave import seguida del nombre del paquete y el módulo o función que se desea importar. Acá se brinda un ejemplo de código. 
///
import paquete_ejemplo.modulo_ejemplo
from paquete_ejemplo import modulo_ejemplo
///

4. ¿Que es la variable \_\_all\_\_ en el archivo \_\_init\_\_.py y cual es su proposito?
Esta variable es una lista que especifica qué módulos serán importados cuando se use el asterisco (*) en una importación desde ese paquete o cuando se quieran importar “todos” los métodos del paquete. Su propósito es controlar qué partes del paquete se consideran "públicas" y están disponibles para ser importadas de esta manera. Esto ayuda a controlar qué elementos son accesibles desde fuera del paquete.

5.  ¿Cual es la ventaja de organizar el codigo en paquetes y modulos en Python?
Dentro de las ventajas de usar este método se tiene la reutilización del código, la estructuración adecuada y coherente, el mantenimiento y el uso del código por separación en pequeñas partes y no en solo una grande.

## Python HTTP y Servicios Web (API):

1.	¿qué es una API y cuál es su función en el contexto de los servicios web?
Una API, que significa Interfaz de Programación de Aplicaciones, es un conjunto de normas y herramientas que facilita la comunicación entre distintas aplicaciones. En el contexto de los servicios web, una API establece el método para el intercambio de datos entre sistemas variados, posibilitando que las aplicaciones intercambien recursos y capacidades de forma uniforme.

2.	¿cuál es la diferencia entre una API RESTful y una API SOAP?
La API RESTful aprovecha los métodos HTTP (GET, POST, PUT, DELETE) y URIs para operar recursos, destacando por su simplicidad, flexibilidad y enfoque en el estado de las representaciones de recursos. Es considerada ligera y adaptable. Por otro lado, las API SOAP utilizan XML para intercambiar mensajes y establecer una comunicación más estructurada y formal entre sistemas, marcadas por una configuración específica de operaciones y tipos de datos, resultando en una solución más compleja y pesada en comparación con RESTful.

3.	Describa los pasos básicos para consumir una API utilizando Python.
Para empezar se debe de importar la biblioteca de request para hacer las solicitudes del HTTP, posteriormente se debe de utilizar la función requests.get() o post(), put(), según corresponda para enviar una solicitud al endpoint de la API. Seguidamente se procesa la respuesta recibida, dependiendo del Api cambia el formato, y finalmente se usan los datos en el programa.

4.	¿qué es la autenticación de API y por qué es importante?
Este proceso implica confirmar la identidad de un usuario o aplicación que busca usar una API, típicamente a través de credenciales como tokens de acceso o claves API. Es crucial para asegurar que solo entidades autorizadas accedan a recursos protegidos, protegiendo datos sensibles y evitando accesos no autorizados tanto a la API como a los sistemas que opera.

5.	¿cuál es el papel de los verbos HTTP (GET, POST, PUT, ¿DELETE) en las solicitudes a una API y HTTP? 
Los verbos HTTP juegan un papel fundamental en la comunicación entre el cliente y el servidor a través de una API. Cada verbo representa una acción específica que el cliente solicita al servidor realizar sobre un recurso determinado

# Links de Referencia:

Sanz, F. (2023, March 22). Algoritmo K-Means Clustering – aplicaciones y desventajas. The Machine Learners. https://www.themachinelearners.com/k-means/

Alvaro. (2023, October 11). Segmentación utilizando K-means en Python. MachineLearningParaTodos.com. https://machinelearningparatodos.com/segmentacion-utilizando-k-means-en-python/
