# Importamos las bibliotecas necesarias para análisis y visualización de datos
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
from sklearn.datasets import make_regression

# Generamos datos sintéticos para una regresión con características y ruido
X, y = make_regression(n_samples=100, n_features=3, noise=20, random_state=42)

# Creamos un DataFrame de pandas para una mejor claridad en la manipulación de datos
df = pd.DataFrame(X, columns=['Tamaño', 'Habitaciones', 'Distancia_Ciudad'])
df['Precio'] = y

# Dividimos los datos en conjuntos de entrenamiento y prueba para validar el modelo
X_train, X_test, y_train, y_test = train_test_split(
    df[['Tamaño', 'Habitaciones', 'Distancia_Ciudad']], 
    df['Precio'], test_size=0.2, random_state=42
)

# Creamos un modelo de regresión lineal múltiple y lo ajustamos con los datos de entrenamiento
modelo = LinearRegression()
modelo.fit(X_train, y_train)

# Mostramos los coeficientes e intercepto del modelo, que definen la ecuación de la línea de mejor ajuste
print("Coeficientes:", modelo.coef_)
print("Intercepción:", modelo.intercept_)

# Realizamos predicciones utilizando el modelo en el conjunto de prueba
y_pred = modelo.predict(X_test)

# Visualizamos la regresión lineal múltiple en gráficos 3D para una comprensión tridimensional
fig = plt.figure(figsize=(12, 6))

# Primer gráfico 3D: Visualización del Precio Verdadero vs características
ax1 = fig.add_subplot(131, projection='3d')
ax1.scatter(X_test['Tamaño'], X_test['Habitaciones'], y_test, c='blue', marker='o', alpha=0.5)
ax1.set_xlabel('Tamaño')
ax1.set_ylabel('Habitaciones')
ax1.set_zlabel('Precio Verdadero')
ax1.set_title('Precio Verdadero vs. Tamaño y Habitaciones')

# Segundo gráfico 3D: Visualización del Precio Predicho vs características
ax2 = fig.add_subplot(132, projection='3d')
ax2.scatter(X_test['Tamaño'], X_test['Habitaciones'], y_pred, c='red', marker='o', alpha=0.5)
ax2.set_xlabel('Tamaño')
ax2.set_ylabel('Habitaciones')
ax2.set_zlabel('Precio Predicho')
ax2.set_title('Precio Predicho vs. Tamaño y Habitaciones')

# Tercer gráfico: Comparación lineal del Precio Verdadero y Precio Predicho
ax3 = fig.add_subplot(133)
ax3.scatter(y_test, y_pred, c='green', alpha=0.5)
ax3.plot([min(y_test), max(y_test)], [min(y_test), max(y_test)], linestyle='--', color='red', linewidth=2)
ax3.set_xlabel('Precio Verdadero')
ax3.set_ylabel('Precio Predicho')
ax3.set_title('Comparación de Precio Verdadero y Precio Predicho')

# Ajustamos la disposición para que todo se muestre de manera ordenada
plt.tight_layout()

# Finalmente, mostramos los gráficos generados
plt.show()
