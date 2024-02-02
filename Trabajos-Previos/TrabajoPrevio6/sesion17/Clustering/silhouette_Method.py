# Importamos las librerías que vamos a utilizar: 
from sklearn.cluster import KMeans
from sklearn.metrics import silhouette_score
import matplotlib.pyplot as plt
import numpy as np

# Generamos datos aleatorios para crear un conjunto de prueba.
np.random.seed(42)  # Establecemos una semilla para que el experimento sea reproducible.
X = np.random.rand(100, 2) * 10  

# Calcularemos el coeficiente de silueta para diferentes cantidades de clusters (k).
# Este coeficiente nos ayuda a determinar cuán bien definidos están los clusters.
silhouette_scores = []  # Lista para almacenar los valores de silueta.

# Probamos k desde 2 hasta 19 porque no se puede calcular silueta para k = 1.
for k in range(2, 20):
    kmeans = KMeans(n_clusters=k, random_state=42)  # Inicializamos KMeans con k clusters.
    kmeans.fit(X)  # Ajustamos el modelo a nuestros datos.
    
    # Calculamos el coeficiente de silueta para la configuración actual de clusters.
    score = silhouette_score(X, kmeans.labels_)
    silhouette_scores.append(score)  # Guardamos el score para graficarlo posteriormente.

# Graficamos los coeficientes de silueta para los distintos valores de k.
plt.plot(range(2, 20), silhouette_scores, marker='o')
plt.title('Método de la Silueta')  
plt.xlabel('Número de Clusters (k)')  
plt.ylabel('Coeficiente de Silueta')  
plt.show()  
