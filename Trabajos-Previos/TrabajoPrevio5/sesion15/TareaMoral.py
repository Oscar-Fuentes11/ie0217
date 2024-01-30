# Importamos las bibliotecas necesarias para la creación de gráficos.
import matplotlib.pyplot as plt
import numpy as np

# Inicializamos los datos de ejemplo que usaremos en el gráfico.
# Tenemos una serie de categorías y dos series de valores que representan datos distintos.
categorias = ['A', 'B', 'C', 'D']
valores1 = [15, 8, 12, 10]
valores2 = [12, 10, 15, 7]
tendencia = [11, 9, 13, 9]

# Creamos una figura y un conjunto de subtramas (en este caso, una sola).
fig, ax = plt.subplots()

# Definimos el ancho de las barras para el gráfico de barras.
ancho_barra = 0.35
# Creamos un array con las posiciones de las barras en el eje X.
indice = np.arange(len(categorias))

# Construimos dos gráficos de barras en el mismo eje, ajustando su posición
# para que las barras de diferentes series no se superpongan.
bar1 = ax.bar(indice - ancho_barra / 2, valores1, ancho_barra, label='Serie 1', color='royalblue')
bar2 = ax.bar(indice + ancho_barra / 2, valores2, ancho_barra, label='Serie 2', color='lightcoral')

# Además, añadimos una línea de tendencia para comparar contra las barras.
ax.plot(indice, tendencia, label='Tendencia', marker='o', color='green')

# Personalizamos el gráfico agregando etiquetas y título a los ejes y al gráfico en general.
ax.set_xlabel('Categorías')
ax.set_ylabel('Valores')
ax.set_title('Gráfico de Barras Agrupadas con Tendencia')
# Definimos la posición de las etiquetas del eje X para que coincidan con las barras.
ax.set_xticks(indice)
ax.set_xticklabels(categorias)
# Activamos la leyenda del gráfico, que identifica cada serie de datos.
ax.legend()

# Añadimos etiquetas de texto sobre cada barra para mostrar su altura (valor numérico).
for bar in [bar1, bar2]:
    for rect in bar:
        height = rect.get_height()
        # La función annotate se usa para poner texto sobre las barras.
        ax.annotate('{}'.format(height),
                    xy=(rect.get_x() + rect.get_width() / 2, height),
                    xytext=(0, 3),  # Desplazamos las etiquetas 3 puntos arriba de la barra.
                    textcoords="offset points",  # El tipo de coordenadas para el desplazamiento.
                    ha='center', va='bottom')  # Alineación horizontal y vertical del texto.

# Ajustamos el diseño del gráfico para evitar superposición de elementos.
plt.tight_layout()
# Añadimos una rejilla en el eje Y para mejorar la lectura de los valores.
plt.grid(axis='y', linestyle='--', alpha=0.7)
# Finalmente, mostramos el gráfico completo.
plt.show()

