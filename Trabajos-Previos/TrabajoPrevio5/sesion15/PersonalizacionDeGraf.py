import matplotlib.pyplot as plt

# Definimos dos listas de valores numéricos: una para el eje X y otra para el eje Y, es lo mismo 
#que hemos venido haciendo con los codes anteriores.
# Estos valores serán usados para trazar puntos en nuestro gráfico de línea.
x = [1, 2, 3, 4, 5]  
y = [10, 12, 5, 8, 14]  
# Utilizamos la función plot de matplotlib para generar un gráfico de línea simple.
# Asignamos una etiqueta para estos datos que aparecerá en la leyenda del gráfico.
plt.plot(x, y, label='Datos de ejemplo')

# Personalización del gráfico:
# Establecemos las etiquetas de los ejes X y Y para proporcionar más contexto sobre los datos.
plt.xlabel('Eje X')  
plt.ylabel('Eje Y') 

# Añadimos un título descriptivo al gráfico que proporciona una visión general de lo que representa.
plt.title('Gráfico de Línea con Etiquetas y Título')

# Activamos la leyenda del gráfico, lo que es útil para identificar cada serie de datos mostrada.
plt.legend()

# Finalmente, con plt.show() mostramos el gráfico en una ventana emergente para su inspección.
plt.show()
