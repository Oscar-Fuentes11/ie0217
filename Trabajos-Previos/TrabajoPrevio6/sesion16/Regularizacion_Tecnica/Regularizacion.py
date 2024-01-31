# Cargamos las bibliotecas necesarias para trabajar con arrays y gráficos
import numpy as np
import matplotlib.pyplot as plt
# Importamos herramientas de scikit-learn para separar datos y crear modelos de regresión
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression, Lasso, Ridge
# Importamos utilidades para añadir características polinómicas y construir pipelines
from sklearn.preprocessing import PolynomialFeatures
from sklearn.pipeline import make_pipeline

#  Primero, generamos datos sintéticos.
np.random.seed(42)  # La semilla para la reproducibilidad, ¡para que los resultados sean consistentes!
X = 2 * np.random.rand(100, 1)  
y = 0.5 * X**2 + X + 2 + np.random.randn(100, 1)  # La relación no lineal para la variable dependiente y

# Partimos los datos para tener un set de entrenamiento y otro de validación
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)

# Construimos un modelo de regresión polinómica de grado 2
modelo_polinomico = make_pipeline(PolynomialFeatures(degree=2), LinearRegression())
modelo_polinomico.fit(X_train, y_train)  # Entrenamos al monstruo con nuestros datos

# También creamos modelos de regresión con regularización L1 y L2 para comparar
modelo_lasso = make_pipeline(PolynomialFeatures(degree=2), Lasso(alpha=0.1))
modelo_lasso.fit(X_train, y_train)  # El Lasso tiende a favorizar soluciones más simples

modelo_ridge = make_pipeline(PolynomialFeatures(degree=2), Ridge(alpha=0.1))
modelo_ridge.fit(X_train, y_train)  # Ridge también simplifica, pero de una manera diferente


# Primero, ordenamos los datos de prueba para una línea más suave en el gráfico
X_test_sorted, y_pred_polinomico_sorted = zip(*sorted(zip(X_test, modelo_polinomico.predict(X_test))))
X_test_sorted, y_pred_lasso_sorted = zip(*sorted(zip(X_test, modelo_lasso.predict(X_test))))
X_test_sorted, y_pred_ridge_sorted = zip(*sorted(zip(X_test, modelo_ridge.predict(X_test))))

# Hacemos un gráfico de dispersión para nuestros datos y dibujamos las predicciones de los modelos
plt.scatter(X_test, y_test, label='Datos de prueba', color='blue')
plt.plot(X_test_sorted, y_pred_polinomico_sorted, label='Regresión Polinómica', color='green')
plt.plot(X_test_sorted, y_pred_lasso_sorted, label='Lasso (L1)', color='red')
plt.plot(X_test_sorted, y_pred_ridge_sorted, label='Ridge (L2)', color='orange')

# Titulamos y etiquetamos con estilo
plt.title('Batalla de los Modelos: Polinómico vs. Lasso vs. Ridge')
plt.xlabel('Característica Misteriosa X')
plt.ylabel('Objetivo Esquivo Y')
plt.legend()  

#acá ya mostramos la grafica
plt.show()
