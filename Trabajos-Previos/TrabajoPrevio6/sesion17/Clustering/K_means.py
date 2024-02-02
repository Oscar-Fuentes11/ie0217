# Importamos las librerías necesarias para el clustering y la visualización
from sklearn.cluster import KMeans
import numpy as np
import matplotlib.pyplot as plt

# Generamos datos aleatorios
np.random.seed(42)  # Fijamos la semilla para reproducibilidad

X = np.random.rand(100, 2) * 10

# Configuramos la figura que contendrá los subgráficos
plt.figure(figsize=(12, 5))

# Creamos el primer subgráfico para visualizar los puntos de datos aleatorios
plt.subplot(1, 2, 1)  # 1 fila, 2 columnas, posición 1, así se trabaja eso.
plt.scatter(X[:, 0], X[:, 1], c='blue', marker='o')  # Dibujamos los puntos
plt.title('Puntos de Datos Aleatorios')  
plt.xlabel('Característica 1')  
plt.ylabel('Característica 2')  

# Configuramos el algoritmo K-Means con un número de clusters específico
kmeans = KMeans(n_clusters=3)
# Ajustamos el modelo a los datos con lo siguiente
kmeans.fit(X)

# Obtenemos las etiquetas de los clusters y las coordenadas de los centroides
labels = kmeans.labels_  # Etiquetas asignadas a cada punto
centroids = kmeans.cluster_centers_  # Coordenadas de los centroides

# Creamos el segundo subgráfico para mostrar el resultado del clustering
plt.subplot(1, 2, 2)  # 1 fila, 2 columnas, posición 2
for i in range(len(X)):  # Iteramos sobre los puntos para colorear según el cluster
    plt.scatter(X[i][0], X[i][1],
                c=('r' if labels[i] == 0 else 'b' if labels[i] == 1 else 'g'),
                marker='o')
# Dibujamos los centroides como puntos grandes en negro con una 'X'
plt.scatter(centroids[:, 0], centroids[:, 1], c='black', marker='X', s=200, label='Centroids')
plt.title('Resultado del Clustering con K-Means')  # Título del subgráfico
plt.xlabel('Característica 1')  
plt.ylabel('Característica 2')  
plt.legend()  

# Ajustamos el diseño de la figura para evitar solapamientos entre subgráficos
plt.tight_layout()
# Mostramos los subgráficos
plt.show()
