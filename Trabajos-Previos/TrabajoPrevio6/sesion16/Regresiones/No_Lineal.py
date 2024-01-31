# Importamos las librerías necesarias para operaciones numéricas y visualización
import numpy as np
import matplotlib.pyplot as plt
# Importamos herramientas específicas para la regresión polinómica
from sklearn.preprocessing import PolynomialFeatures
from sklearn.linear_model import LinearRegression
from sklearn.pipeline import make_pipeline

# Generamos datos sintéticos que siguen una tendencia no lineal
np.random.seed(42)  # Fijamos la semilla para reproducibilidad
X = 2 * np.random.rand(100, 1)  # Valores de entrada
y = 0.5 * X**2 + X + 2 + np.random.randn(100, 1)  # Valores de salida con relación cuadrática y ruido

# Visualizamos los datos generados para ver la tendencia no lineal
plt.scatter(X, y)
plt.title('Datos de Regresión No Lineal')
plt.xlabel('X')
plt.ylabel('y')
plt.show()

# Aplicamos regresión polinómica de segundo grado para ajustar los datos no lineales
grado_polinomio = 2  # Definimos el grado del polinomio
# Creamos un modelo de pipeline que incluye la generación de características polinómicas
# y la aplicación de regresión lineal
modelo_polinomico = make_pipeline(PolynomialFeatures(grado_polinomio), LinearRegression())
modelo_polinomico.fit(X, y)  # Ajustamos el modelo a los datos

# Visualizamos la regresión polinómica superpuesta con los datos originales
X_test = np.linspace(0, 2, 100).reshape(100, 1)  # Generamos valores de X para la predicción
y_pred = modelo_polinomico.predict(X_test)  # Realizamos predicciones con el modelo

# Dibujamos los datos originales y la curva de ajuste
plt.scatter(X, y)
plt.plot(X_test, y_pred, color='red', label=f'Regresión Polinómica ({grado_polinomio} grado)')
plt.title('Regresión Polinómica')
plt.xlabel('X')
plt.ylabel('y')
plt.legend()
plt.show()
