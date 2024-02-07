import pandas as pd
import matplotlib.pyplot as plt
import os

# Obtener la ruta completa del archivo datos_transportation.xlsx
ruta_archivo = "src/Programa1/datos_transportation.xlsx"

print("\n Programa #1 \n")
# Leer el archivo xlsx
df = pd.read_excel(ruta_archivo, header=None)

# Transponer el DataFrame
df_transposed = df.T

# Eliminar la primera fila (encabezados anteriores)
df_transposed = df_transposed.drop(columns=[0])

#Elimina de la columna 8 en adelante
df_transposed = df_transposed.iloc[:, :8]

# Convertir a float los datos de la fila 1 en adelante
df_transposed.iloc[1:] = df_transposed.iloc[1:].astype(float)
print("\nMi DataFrame:\n")
print(df_transposed)

# Convertir las columnas a tipo numérico, excepto la primera que contiene los años
df_transposed[df_transposed.columns[1:]] = df_transposed[df_transposed.columns[1:]].apply(pd.to_numeric, errors='coerce')
# Eliminar la fila 0 (Titulos)
df_transposed = df_transposed.drop(index=0)
# Generador para describir las columnas
def describe_columns(df):
    for col in df.columns[1:]:  # Omitimos la columna de 'Years'
        yield df[col].describe()

# Generador para obtener valores únicos de una columna
def unique_values(df, col_index):
    yield df.iloc[:, col_index].unique()

# Generador para datos de gráficos
def graph_data(df, year_col_index, data_col_index):
    yield df.iloc[:, year_col_index], df.iloc[:, data_col_index]

# Utilizar los generadores
print("\nDescripción de los datos por columna:")
for column_description in describe_columns(df_transposed):
    print(column_description)

print("\nValores únicos en la columna de emisiones:")
emission_unique_values = next(unique_values(df_transposed, 7))
print(emission_unique_values)

# Preparar los datos para los gráficos
columna_anios, columna_emisiones = next(graph_data(df_transposed, 0, 7))

# Gráfico de líneas
plt.plot(columna_anios, columna_emisiones)
plt.xlabel('Años')
plt.ylabel('Emisiones de combustible (millones de toneladas cortas)')
plt.title('Tendencia de las emisiones de combustible a lo largo del tiempo (Gráfico de Líneas)')
plt.show()

# Gráfico de barras
plt.bar(columna_anios, columna_emisiones)
plt.xlabel('Años')
plt.ylabel('Emisiones de combustible (millones de toneladas cortas)')
plt.title('Tendencia de las emisiones de combustible a lo largo del tiempo (Gráfico de Barras)')
plt.show()

# Gráfico de dispersión
plt.scatter(columna_anios, columna_emisiones)
plt.xlabel('Años')
plt.ylabel('Emisiones de combustible (millones de toneladas cortas)')
plt.title('Relación entre las emisiones de combustible y el tiempo (Gráfico de Dispersión)')
plt.show()