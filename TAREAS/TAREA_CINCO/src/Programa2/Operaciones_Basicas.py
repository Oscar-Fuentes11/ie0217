import numpy as np
print("\n Programa #2 \n")
# Creación de Datos
# Generamos un conjunto de datos con calificaciones para 5 estudiantes en 5 asignaturas
np.random.seed(0)  # Asegura reproducibilidad
calificaciones = np.random.randint(0, 101, size=(5, 5))

# Operaciones con NumPy

# Función para calcular el promedio de calificaciones por estudiante y por asignatura
def promedios_calificaciones(calificaciones):
    promedio_estudiantes = np.mean(calificaciones, axis=1)  # Promedio por estudiante
    promedio_asignaturas = np.mean(calificaciones, axis=0)  # Promedio por asignatura
    return promedio_estudiantes, promedio_asignaturas

# Calcular la calificación máxima obtenida por cada estudiante
max_calificaciones_estudiantes = np.max(calificaciones, axis=1)

# Calcular la suma total de calificaciones por asignatura
suma_calificaciones_asignaturas = np.sum(calificaciones, axis=0)

# Resultados

# Imprimir los datos creados
print("Calificaciones de los estudiantes:")
print(calificaciones)

# Calcular e imprimir los promedios
promedio_estudiantes, promedio_asignaturas = promedios_calificaciones(calificaciones)
print("\nPromedio de calificaciones por estudiante:", promedio_estudiantes)
print("Promedio de calificaciones por asignatura:", promedio_asignaturas)

# Imprimir la calificación máxima por estudiante
print("\nCalificación máxima obtenida por cada estudiante:", max_calificaciones_estudiantes)

# Imprimir la suma total de calificaciones por asignatura
print("Suma total de calificaciones por asignatura:", suma_calificaciones_asignaturas)
