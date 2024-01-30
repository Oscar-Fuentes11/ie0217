import matplotlib.pyplot as plt

# Definimos los datos de ejemplo que representan las proporciones de las categorías.
proporciones = [30, 20, 25, 15]
etiquetas = ['A', 'B', 'C', 'D']

# Creamos un gráfico de pastel con las proporciones y etiquetas especificadas.
# 'autopct' permite mostrar el porcentaje de cada porción con un formato específico.
# 'startangle' rota el comienzo del gráfico para dar un mejor aspecto.
plt.pie(proporciones, labels=etiquetas, autopct='%1.1f%%', startangle=140,
        colors=['gold', 'lightcoral', 'lightgreen', 'lightskyblue'])

# Personalizamos el gráfico añadiendo un título descriptivo.
plt.title('Gráfico de Pastel')

# Mostramos el gráfico en pantalla.
# Esto genera una ventana emergente que presenta nuestro gráfico de pastel coloreado.
plt.show()
