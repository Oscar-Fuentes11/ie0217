# Importamos las librerías esenciales para el procesamiento de datos y visualización gráfica.
import numpy as np
import matplotlib.pyplot as plt
# Importamos funciones de scikit-learn para dividir datos y crear modelos de regresión lineal.
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
# Importamos la métrica r2_score para evaluar la calidad de nuestro modelo.
from sklearn.metrics import r2_score

# Generamos datos sintéticos para nuestro experimento de regresión.
np.random.seed(42)  # Establecemos una semilla para reproducibilidad.
X = 2 * np.random.rand(100, 1)  
y = 4 + 3 * X + np.random.randn(100, 1)  

# Dividimos los datos en conjuntos de entrenamiento y prueba para validar el rendimiento del modelo.
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)

# Creamos y ajustamos un modelo de regresión lineal utilizando los datos de entrenamiento.
modelo = LinearRegression()
modelo.fit(X_train, y_train)

# Realizamos predicciones utilizando el conjunto de prueba y el modelo ajustado.
y_pred = modelo.predict(X_test)

# Calculamos el coeficiente de determinación R², una medida de qué tan bien las predicciones
# se correlacionan con los valores reales.
r2 = r2_score(y_test, y_pred)

# Visualizamos los datos y la línea de regresión, incluyendo el valor de R² en la leyenda.
plt.scatter(X_test, y_test, label='Datos de prueba', color='blue')  
plt.plot(X_test, y_pred, label=f'Regresión Lineal (R²={r2:.2f})', color='red') 
plt.title('Regresión Lineal y Coeficiente de Determinación R²')  
plt.xlabel('X')  
plt.ylabel('y')  
plt.legend()  # Añadimos una leyenda para identificar nuestros datos.
plt.show()  
