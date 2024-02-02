from sklearn.cluster import KMeans
import numpy as np
import matplotlib.pyplot as plt

# Generar datos aleatorios
np.random.seed(42) 
X = np.random.rand(100, 2) * 10

# Calcular la inercia para diferentes valores de k
inertias = []  # Lista para almacenar los valores de inercia
for k in range(1, 11):  
    kmeans = KMeans(n_clusters=k, random_state=42)  # Inicializar KMeans con k clusters
    kmeans.fit(X)  # Ajustar el modelo a los datos 
    inertias.append(kmeans.inertia_)  # Añadir la inercia del modelo a la lista

# Graficar el método del codo
plt.plot(range(1, 11), inertias, marker='o')  # Dibujar una línea con los valores de inercia en el grafico que se mostrará
plt.title('Método del Codo')  
plt.xlabel('Número de Clusters (k)')  
plt.ylabel('Inercia')  
plt.show() 
