# Importamos las librerías necesarias para el clustering 
import matplotlib.pyplot as plt
from scipy.cluster.hierarchy import dendrogram, linkage
from sklearn.datasets import make_blobs
from sklearn.cluster import AgglomerativeClustering

# Generamos datos de ejemplo utilizando la función make_blobs,
# que es útil para generar datos distribuidos en grupos (blobs).
X, y = make_blobs(n_samples=50, centers=3, random_state=42, cluster_std=1.0)

# Configuramos el Clustering Jerárquico con enlace completo.
# El método de enlace completo considera la distancia máxima entre puntos de diferentes clusters.
Z = linkage(X, method='complete')

# Visualizamos el dendrograma, que es un diagrama que muestra las agrupaciones jerárquicas.
plt.figure(figsize=(10, 5))
dendrogram(Z)
plt.title('Dendrograma Hierarchical Clustering')  
plt.xlabel('Índice del Punto de Datos')  
plt.ylabel('Distancia') 
plt.show()

# Configuramos el Clustering Jerárquico utilizando la implementación de scikit-learn.
agg_clustering = AgglomerativeClustering(n_clusters=3)
agg_labels = agg_clustering.fit_predict(X)  # Ajustamos el modelo y predecimos los clusters

# Visualizamos los resultados del clustering jerárquico.
plt.scatter(
    X[:, 0], X[:, 1],  
    c=agg_labels,       
    cmap='viridis',     
    edgecolor='k',      
    s=50                
)
plt.title('Resultado del Clustering Jerárquico')  # Título del gráfico
plt.xlabel('Característica 1')  
plt.ylabel('Característica 2')  
plt.show()
