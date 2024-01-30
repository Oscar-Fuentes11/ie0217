import matplotlib.pyplot as plt

# Datos de ejemplo para el gráfico de caja
datos = [15, 25, 30, 35, 40, 45, 50, 60, 70, 80, 90]

# Creación de un gráfico de caja con los datos proporcionados
plt.boxplot(datos)

# Personalización del gráfico con etiquetas y título
plt.ylabel('Valores')  
plt.title('Gráfico de Caja') 

# Mostrar el gráfico 
plt.show()
