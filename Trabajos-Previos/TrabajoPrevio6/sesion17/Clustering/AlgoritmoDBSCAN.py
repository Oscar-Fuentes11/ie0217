# Importamos las librerías necesarias para el clustering y la visualización.
import matplotlib.pyplot as plt
from sklearn.datasets import make_moons
from sklearn.cluster import DBSCAN

# Generamos datos de ejemplo que tienen la forma de dos lunas crecientes.
X, _ = make_moons(n_samples=200, noise=0.05, random_state=42)

# Configuramos y ajustamos el modelo DBSCAN.
# DBSCAN es un algoritmo de clustering basado en densidad que puede identificar clusters de formas arbitrarias.
# 'eps' es la distancia máxima entre dos muestras para que una se considere en la vecindad de la otra.
# 'min_samples' es el número mínimo de muestras en un vecindario para que un punto sea considerado un punto central.
dbscan = DBSCAN(eps=0.3, min_samples=5)
dbscan_labels = dbscan.fit_predict(X)  # Ajustamos el modelo a los datos y predecimos los clusters.

# Visualizamos los resultados del clustering.
# Cada punto se colorea según el cluster al que pertenece.
plt.scatter(
    X[:, 0], X[:, 1],              
    c=dbscan_labels,               
    cmap='viridis',                
    edgecolor='k',                 
    s=50                           
)
plt.title('Resultado del Clustering DBSCAN')  
plt.xlabel('Característica 1')  
plt.ylabel('Característica 2')  
plt.show()  
