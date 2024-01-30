# Importando la biblioteca pandas
import pandas as pd

# Cargar los datos desde un archivo CSV en un DataFrame llamado 'datos'
datos = pd.read_csv("datos.csv")

# Visualizar las dos primeras entradas del DataFrame
datos.head(2)

# Revisar los tipos de datos de las columnas en 'datos'
datos.dtypes

# Imprimir el DataFrame completo
print(datos)

# Obtener y mostrar información general sobre el DataFrame
datos.info()

# Crear y mostrar un DataFrame con solo las columnas 'edad' y 'altura'
edad_altura = datos[['edad', 'altura']]
edad_altura.head()

# Verificar el tipo de objeto de la selección de 'edad' y 'altura'
type(datos[["edad", "altura"]])

# Obtener filas del DataFrame donde la edad es mayor a 18 años
adultos = datos[datos["edad"] > 18]
adultos.head()

# Determinar el tamaño del DataFrame filtrado para adultos (filas, columnas)
adultos.shape

# Extraer los nombres de las personas con más de 18 años
nombres_de_adultos = datos.loc[datos["edad"] > 18, "nombre"]

# Calcular y mostrar la edad promedio en el DataFrame
datos["edad"].mean()

# Hallar la mediana de las columnas 'edad' y 'peso'
datos[["edad", "peso"]].median()

# Mostrar un resumen estadístico para 'edad' y 'peso'
datos[["edad", "peso"]].describe()

# Calcular estadísticas específicas para 'edad' y 'peso' con la función agg()
datos.agg(
    {
        "edad": ["min", "max", "median", "skew"],
        "peso": ["min", "max", "median", "mean"]
    }
)
