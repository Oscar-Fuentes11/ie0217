import matplotlib.pyplot as plt
from sklearn.cluster import KMeans
from sklearn.preprocessing import StandardScaler
from sklearn.metrics import silhouette_score
from sklearn.decomposition import PCA

def clustering(data):

#  Acá debemos suponer que 'data' es tu dataframe con las características de los vehículos

# Acá seleccionamos las características relevantes para el clustering
    features_for_clustering = ['selling_price', 'km_driven', 'year']  # Puedes ajustar estas características según tus necesidades

# Filtramos el dataframe
    data_for_clustering = data[features_for_clustering]

# Estandarizamos las características de ello
    scaler = StandardScaler()
    data_for_clustering_scaled = scaler.fit_transform(data_for_clustering)

# Acá se evalua el número óptimo de clusters utilizando el método del codo
    inertia = []
    for k in range(1, 11):
        kmeans = KMeans(n_clusters=k, random_state=42)
        kmeans.fit(data_for_clustering_scaled)
        inertia.append(kmeans.inertia_)

# Graficamos el método del codo
    plt.plot(range(1, 11), inertia, marker='o')
    plt.title('Método del Codo para Determinar el Número Óptimo de Clusters')
    plt.xlabel('Número de Clusters')
    plt.ylabel('Inercia')
    plt.show()

# Evaluación del número óptimo de clusters utilizando el método de Silhouette
    silhouette_scores = []
    for k in range(2, 11):
        kmeans = KMeans(n_clusters=k, random_state=42)
        kmeans.fit(data_for_clustering_scaled)
        labels = kmeans.labels_
        silhouette_scores.append(silhouette_score(data_for_clustering_scaled, labels))

# Graficamos el método de Silhouette
    plt.plot(range(2, 11), silhouette_scores, marker='o')
    plt.title('Método de Silhouette para Determinar el Número Óptimo de Clusters')
    plt.xlabel('Número de Clusters')
    plt.ylabel('Silhouette Score')
    plt.show()

# Elegimos el número óptimo de clusters basado en los métodos anteriores
    optimal_clusters = 3  # Ajusta este valor según los resultados de las gráficas

# Aplicamos K-Means con el número óptimo de clusters
    kmeans = KMeans(n_clusters=optimal_clusters, random_state=42)
    labels = kmeans.fit_predict(data_for_clustering_scaled)

# Añadimos las etiquetas al dataframe original
    data['cluster'] = labels

# Visualización de los clusters en un espacio reducido con PCA
    pca = PCA(n_components=2)
    data_pca = pca.fit_transform(data_for_clustering_scaled)

    plt.scatter(data_pca[:, 0], data_pca[:, 1], c=labels, cmap='viridis', edgecolor='k', s=50)
    plt.title('Visualización de Clusters con PCA')
    plt.xlabel('Componente Principal 1')
    plt.ylabel('Componente Principal 2')
    plt.show()

# Evaluación del rendimiento (puedes ajustar las métricas según tus necesidades)
# Puedes usar métricas específicas para evaluar la calidad de los clusters, como la pureza o la homogeneidad

# Muestra el resultado del clustering
    print("\nResultado del Clustering:")
    print(data[['selling_price', 'km_driven', 'year', 'cluster']].head())
