import matplotlib.pyplot as plt

# Inicializamos los datos de ejemplo para nuestras series de gráficos
x = [1, 2, 3, 4, 5]  # Datos comunes para el eje X
y1 = [10, 12, 5, 8, 14]  
y2 = [5, 8, 9, 6, 10]  

# Configuramos un conjunto de subtramas para mostrar múltiples gráficos en una sola figura
# La figura tendrá 1 fila y 2 columnas, es decir, dos gráficos lado a lado
fig, axs = plt.subplots(1, 2)  # axs es un array que contiene nuestras subtramas

# Creamos un gráfico de línea en la primera subtrama (axs[0])
# Etiquetamos esta serie como 'Serie A' y le damos un título a la subtrama
axs[0].plot(x, y1, label='Serie A')
axs[0].set_title('Subtrama 1')

# Creamos otro gráfico de línea en la segunda subtrama (axs[1])
# Esta vez, la serie se llama 'Serie B', se colorea de rojo y también recibe un título
axs[1].plot(x, y2, label='Serie B', color='red')
axs[1].set_title('Subtrama 2')

# Personalizamos cada subtrama iterando sobre el array axs
# Asignamos etiquetas comunes para los ejes X e Y y activamos la leyenda en cada subtrama
for ax in axs:
    ax.set_xlabel('Eje X')
    ax.set_ylabel('Eje Y')
    ax.legend()

# Ajustamos la disposición de las subtramas para que no haya superposición de contenido
plt.tight_layout()

# Finalmente, mostramos la figura completa con las subtramas
plt.show()
