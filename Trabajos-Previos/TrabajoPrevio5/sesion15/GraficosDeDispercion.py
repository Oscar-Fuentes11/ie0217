# Importación de la biblioteca matplotlib para la creación de visualizaciones gráficas
import matplotlib.pyplot as plt

# Definición de los datos de ejemplo que se utilizarán en el gráfico de dispersión
x = [1, 2, 3, 4, 5]  
y = [10, 12, 5, 8, 14]

# Creación del gráfico de dispersión utilizando los datos definidos previamente
# El parámetro 'label' se utiliza para asignar una etiqueta a los puntos de dispersión
plt.scatter(x, y, label='Puntos')

# Personalización del gráfico añadiendo etiquetas informativas y título
plt.xlabel('Eje X')  
plt.ylabel('Eje Y')  
plt.title('Gráfico de Dispersión')  

# Añadir leyenda al gráfico para identificar los elementos con las etiquetas asignadas
plt.legend()

# Finalmente, mostrar el gráfico generado en una ventana emergente
plt.show()
