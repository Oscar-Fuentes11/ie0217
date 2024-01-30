# Importación de la biblioteca para visualización de datos
import matplotlib.pyplot as plt

# Datos de ejemplo para el eje X y Y
x = [1, 2, 3, 4, 5]  # Valores del eje X
y = [10, 12, 5, 8, 14]  # Valores del eje Y

# Creación de un gráfico de línea simple
plt.plot(x, y)

# Personalización del gráfico para mejorar su visualización
plt.xlabel('Eje X')  # Etiqueta para el eje X
plt.ylabel('Eje Y')  # Etiqueta para el eje Y
plt.title('Gráfico de Línea Simple')  # Título del gráfico
plt.grid(True)  # Añade una cuadrícula al gráfico para facilitar la lectura

# Visualización del gráfico
plt.show()
