# Importamos las librerías necesarias para el cálculo numérico y la visualización de datos.
import numpy as np
import matplotlib.pyplot as plt
# Importamos LinearRegression de scikit-learn para realizar una regresión lineal.
from sklearn.linear_model import LinearRegression

# Generamos datos de ejemplo de manera aleatoria pero con una tendencia lineal.
np.random.seed(42)  # Semilla para la reproducibilidad de los resultados
X = 2 * np.random.rand(100, 1)  # 100 puntos aleatorios para el eje X
y = 4 + 3 * X + np.random.randn(100, 1)  # Valores del eje Y con una relación lineal y ruido añadido

# Creamos un modelo de regresión lineal utilizando scikit-learn.
modelo = LinearRegression()

# Ajustamos el modelo a los datos. Esto encuentra la línea que mejor se ajusta a los datos.
modelo.fit(X, y)

# Imprimimos los parámetros de la línea ajustada, coeficiente e intercepto.
print("Coeficiente:", modelo.coef_[0][0])  # Pendiente de la línea
print("Intercepción:", modelo.intercept_[0])  # Punto donde la línea intercepta el eje Y

# Visualizamos los datos y la línea de regresión ajustada.
plt.scatter(X, y)  # Dibujamos los datos originales como puntos
# Dibujamos la línea de regresión, que predice los valores de Y dado los valores de X.
plt.plot(X, modelo.predict(X), color='red', linewidth=3)
plt.title('Regresión Lineal')  # Título del gráfico
plt.xlabel('X')  
plt.ylabel('y')  


plt.show()
