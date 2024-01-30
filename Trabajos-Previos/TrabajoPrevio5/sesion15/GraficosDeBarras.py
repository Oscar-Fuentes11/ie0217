import matplotlib.pyplot as plt

# Definimos un conjunto de datos de ejemplo con categorías y sus respectivos valores.
# Las categorías representan grupos discretos, mientras que los valores son numéricos.
categorias = ['A', 'B', 'C', 'D']
valores = [15, 8, 12, 10]

# Creamos un gráfico de barras verticales utilizando los datos anteriores.
# Elegimos un color 
plt.bar(categorias, valores, color='royalblue')

# Personalizamos el gráfico añadiendo etiquetas a los ejes y un título descriptivo.
# Estas etiquetas y títulos mejoran la comprensión del gráfico para el espectador.
plt.xlabel('Categorías')  
plt.ylabel('Valores')     
plt.title('Gráfico de Barras Verticales')  

# Finalmente, mostramos el gráfico en pantalla.
# Esto generará una ventana emergente con nuestro gráfico de barras.
plt.show()
