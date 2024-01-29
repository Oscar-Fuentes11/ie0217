"""
@file
@brief Alergias y Evaluaciones
@author Oscar Fuentes
@date 27-01-2024
@license [Licencia de Código Abierto]
"""

import timeit
import cProfile

class Alergia:
    """
    Clase que representa una alergia con nombre y valor.

    Atributos:
        nombre (str): Nombre de la alergia.
        valor (int): Valor de la alergia, potencia de 2.
    """

    def __init__(self, nombre, valor):
        """
        Constructor de la clase Alergia.

        Args:
            nombre (str): Nombre de la alergia.
            valor (int): Valor de la alergia, potencia de 2.
        """

        self.nombre = nombre
        self.valor = valor

    def __str__(self):
        """
        Método para obtener una representación en cadena de la alergia.

        Returns:
            str: Representación en cadena de la alergia.
        """

        return f"{self.nombre} (Valor: {self.valor})"


class EvaluacionEspecifica:
    """
    Clase que realiza la evaluación específica de alergias.

    Atributos de Clase:
        alergias_conocidas (list): Lista de alergias conocidas a nivel de clase.

    Atributos:
        puntuacion (int): Puntuación general de alergias ingresada.
    """

    # Lista de alergias conocidas a nivel de clase
    alergias_conocidas = [
    Alergia("Huevos", 1), Alergia("Cacahuetes", 2), Alergia("Mariscos", 4),
    Alergia("Fresas", 8), Alergia("Tomates", 16), Alergia("Chocolate", 32),
    Alergia("Polen", 64), Alergia("Gatos", 128), Alergia("Sardinas", 256),
    Alergia("Gluten", 512), Alergia("Huevo", 1024), Alergia("Nueces", 2048),
    Alergia("Leche", 4096), Alergia("Soja", 8192), Alergia("Miel", 16384),
    Alergia("Piña", 32768), Alergia("Ajo", 65536), Alergia("Maíz", 131072),
    Alergia("Kiwi", 262144), Alergia("Menta", 524288), Alergia("Gambas", 1048576),
    Alergia("Apio", 2097152), Alergia("Pescado", 4194304), Alergia("Manzanas", 8388608),
    Alergia("Cilantro", 16777216), Alergia("Aguacate", 33554432), Alergia("Zanahorias", 67108864),
    Alergia("Berenjenas", 134217728), Alergia("Lentejas", 268435456), Alergia("Almendras", 536870912),
    Alergia("Canela", 1073741824), Alergia("Altramuces", 2147483648), Alergia("Mantequilla", 4294967296),
    Alergia("Pepino", 8589934592), Alergia("Cangrejo", 17179869184), Alergia("Almejas", 34359738368),
    Alergia("Anacardos", 68719476736), Alergia("Coliflor", 137438953472), Alergia("Pimienta", 274877906944),
    Alergia("Arándanos", 549755813888), Alergia("Pera", 1099511627776), Alergia("Cerveza", 2199023255552),
    Alergia("Guisantes", 4398046511104), Alergia("Ciruelas", 8796093022208), Alergia("Trigo", 17592186044416),
    Alergia("Higos", 35184372088832), Alergia("Centeno", 70368744177664), Alergia("Pistachos", 140737488355328),
    Alergia("Cangrejo de río", 281474976710656), Alergia("Col", 562949953421312)
    ]

    def __init__(self, puntuacion):
        """
        Constructor de la clase EvaluacionEspecifica.

        Args:
            puntuacion (int): Puntuación general de alergias ingresada.
        """

        self.puntuacion = puntuacion

    @classmethod
    def agregar_alergia_conocida(cls, nueva_alergia):
        """
        Método para agregar una nueva alergia conocida a la lista de alergias conocidas.

        Args:
            nueva_alergia (Alergia): Nueva alergia a agregar.
        """

        cls.alergias_conocidas.append(nueva_alergia)

    def evaluar_alergias(self):
        """
        Método para evaluar las alergias de una persona basado en la puntuación ingresada.

        Returns:
            list: Lista de alergias identificadas.
        """

        # Inicio del perfilado
        profiler = cProfile.Profile()
        profiler.enable()

        # Proceso original de evaluación de alergias
        alergias_persona = []
        puntuacion_restante = self.puntuacion
        for alergia in reversed(self.alergias_conocidas):
            if alergia.valor <= puntuacion_restante:
                alergias_persona.append(alergia)
                puntuacion_restante -= alergia.valor

        # Fin del perfilado y mostrar resultados
        profiler.disable()
        profiler.print_stats(sort='time')

        # Medición del tiempo
        tiempo_inicio = timeit.default_timer()
        # (Repetir el proceso de evaluación de alergias si es necesario)
        tiempo_fin = timeit.default_timer()
        print(f"Tiempo para evaluar alergias: {tiempo_fin - tiempo_inicio} segundos")

        return alergias_persona




class TiposDeAlergias:
    """
    Clase que gestiona los tipos de alergias.

    Atributos:
        alergias (list): Lista de alergias identificadas.
        alergias_no_identificadas (list): Lista de nombres de alergias no identificadas.
        valores_no_identificados (list): Lista de valores de alergias no identificadas.
    """

    def __init__(self):
        """
        Constructor de la clase TiposDeAlergias.
        """

        self.alergias = []
        self.alergias_no_identificadas = []
        self.valores_no_identificados = []

    def agregar_alergia(self, nombre=None, valor=None):
        """
        Método para agregar una alergia con nombre y valor, o solo nombre o solo valor.

        Args:
            nombre (str, optional): Nombre de la alergia. Defaults to None.
            valor (int, optional): Valor de la alergia. Defaults to None.
        """

        # Inicio de la medición de tiempo
        tiempo_inicio = timeit.default_timer()

        # Proceso original de agregar alergia
        if nombre and valor:
            self.alergias.append(Alergia(nombre, valor))
        elif nombre:
            self.alergias_no_identificadas.append(nombre)
        elif valor:
            self.valores_no_identificados.append(valor)

        # Fin de la medición de tiempo
        tiempo_fin = timeit.default_timer()
        print(f"Tiempo para agregar alergia: {tiempo_fin - tiempo_inicio} segundos")

        # Inicio del perfilado
        profiler = cProfile.Profile()
        profiler.enable()

        # (Repetir el proceso de agregar alergia si es necesario para el perfilado)
        if nombre and valor:
            pass  # Simular la adición para el perfilado

        # Fin del perfilado y mostrar resultados
        profiler.disable()
        profiler.print_stats(sort='time')

    def obtener_alergias(self):
        """
        Método para obtener la lista de alergias identificadas.

        Returns:
            list: Lista de alergias identificadas.
        """

        return self.alergias

    def obtener_alergias_no_identificadas(self):
        """
        Método para obtener la lista de nombres de alergias no identificadas.

        Returns:
            list: Lista de nombres de alergias no identificadas.
        """

        return self.alergias_no_identificadas

    def obtener_valores_no_identificados(self):
        """
        Método para obtener la lista de valores de alergias no identificadas.

        Returns:
            list: Lista de valores de alergias no identificadas.
        """

        return self.valores_no_identificados


class EvaluacionGeneral:
    """
    Clase que realiza la evaluación general de alergias.

    Atributos:
        tipos_de_alergias (TiposDeAlergias): Tipos de alergias ingresados para la evaluación general.
        puntuacion_general (int): Puntuación general de alergias calculada.
    """

    def __init__(self, tipos_de_alergias):
        """
        Constructor de la clase EvaluacionGeneral.

        Args:
            tipos_de_alergias (TiposDeAlergias): Tipos de alergias ingresados para la evaluación general.
        """

        self.tipos_de_alergias = tipos_de_alergias
        self.puntuacion_general = self.calcular_puntuacion_general()

    def calcular_puntuacion_general(self):
        """
        Método para calcular la puntuación general de alergias.

        Returns:
            int: Puntuación general de alergias.
        """

        return sum(alergia.valor for alergia in self.tipos_de_alergias.obtener_alergias())

    def mostrar_resultados(self):
        """
        Método para mostrar los resultados de la evaluación general de alergias.
        """

        print("Puntuación General de Alergias:", self.puntuacion_general)
        print("Alergias Identificadas:", [str(a) for a in self.tipos_de_alergias.obtener_alergias()])
        if self.tipos_de_alergias.obtener_alergias_no_identificadas():
            print("Alergias sin Puntuación:", self.tipos_de_alergias.obtener_alergias_no_identificadas())
        if self.tipos_de_alergias.obtener_valores_no_identificados():
            print("Resultados Desconocidos:", self.tipos_de_alergias.obtener_valores_no_identificados())

def medir_tiempo(func, *args):
    """
    Función que mide el tiempo de ejecución de una función y devuelve el tiempo y el resultado de la función.

    Args:
        func (function): Función a la que se le medirá el tiempo de ejecución.
        *args: Argumentos adicionales para la función.

    Returns:
        tuple: Una tupla que contiene el tiempo de ejecución (float) y el resultado de la función.
    """

    tiempo_inicio = timeit.default_timer()
    resultado = func(*args)
    tiempo_fin = timeit.default_timer()
    return tiempo_fin - tiempo_inicio, resultado

def perfilar(func, *args):
    """
    Función que realiza el perfilado de una función y muestra las estadísticas de tiempo.

    Args:
        func (function): Función que se perfilizará.
        *args: Argumentos adicionales para la función.

    Returns:
        Any: Resultado de la función.
    """

    profiler = cProfile.Profile()
    profiler.enable()
    resultado = func(*args)
    profiler.disable()
    profiler.print_stats(sort='time')
    return resultado

def ingresar_puntuacion_general():
    """
    Función para ingresar la puntuación general de alergias.

    Returns:
        tuple: Una tupla que contiene la puntuación ingresada (int) y una lista de alergias específicas (list of Alergia objects).
    """

    puntuacion = int(input("Ingrese su puntuación general de alergias: "))
    evaluacion_especifica = EvaluacionEspecifica(puntuacion)
    print("Alergias basadas en la puntuación general:")
    alergias_especificas = evaluacion_especifica.evaluar_alergias()
    for alergia in alergias_especificas:
        print(alergia)
    return puntuacion, alergias_especificas

def ingresar_tipos_alergias(tipos_alergias, alergias_conocidas):
    """
    Función para ingresar tipos de alergias que tiene una persona.

    Args:
        tipos_alergias (TiposDeAlergias): Instancia de TiposDeAlergias.
        alergias_conocidas (list): Lista de alergias conocidas.

    Returns:
        None
    """

    while True:
        entrada = input("Ingrese una alergia y su valor (o 'fin' para terminar): ")
        if entrada.lower() == 'fin':
            break
        partes = entrada.split()
        if len(partes) == 2 and partes[1].isdigit():
            nombre, valor = partes
            valor = int(valor)
            if es_alergia_reconocida(nombre, alergias_conocidas):
                tipos_alergias.agregar_alergia(nombre, valor)
            else:
                print("Alergia no reconocida.")
        else:
            print("Formato incorrecto. Ingrese el nombre y valor de la alergia.")

def agregar_alergia():
    """
    Función para agregar una nueva alergia al sistema.

    Returns:
        None
    """

    nombre = input("Ingrese el nombre de la nueva alergia: ")
    valor = int(input("Ingrese el valor (potencia de 2) de la nueva alergia: "))
    nueva_alergia = Alergia(nombre, valor)

    # Medición del tiempo y perfilado al agregar una nueva alergia
    tiempo_inicio = timeit.default_timer()
    EvaluacionEspecifica.agregar_alergia_conocida(nueva_alergia)
    tiempo_fin = timeit.default_timer()
    print(f"Alergia '{nombre}' agregada al sistema.")
    print(f"Tiempo para agregar alergia: {tiempo_fin - tiempo_inicio} segundos")

    # Perfilado del método agregar_alergia_conocida
    profiler = cProfile.Profile()
    profiler.enable()
    EvaluacionEspecifica.agregar_alergia_conocida(nueva_alergia)
    profiler.disable()
    profiler.print_stats(sort='time')

def es_alergia_reconocida(nombre, alergias_conocidas):
    """
    Función para verificar si una alergia es reconocida en la lista de alergias conocidas.

    Args:
        nombre (str): Nombre de la alergia a verificar.
        alergias_conocidas (list): Lista de alergias conocidas.

    Returns:
        bool: True si la alergia es reconocida, False en caso contrario.
    """

    return any(alergia.nombre.lower() == nombre.lower() for alergia in alergias_conocidas)

def mostrar_evaluaciones_combinadas(puntuacion, alergias_especificas, tipos_alergias):
    """
    Función para mostrar evaluaciones combinadas de alergias.

    Args:
        puntuacion (int): Puntuación general de alergias.
        alergias_especificas (list): Lista de alergias específicas.
        tipos_alergias (TiposDeAlergias): Instancia de TiposDeAlergias.

    Returns:
        None
    """

    # Mostrar Evaluación Específica
    print("\nEvaluación Específica basada en Puntuación Ingresada:")
    for alergia in alergias_especificas:
        print(alergia)

    # Perfilar y medir el tiempo de la creación de la Evaluación General
    print("\nEvaluación General basada en Tipos de Alergias Ingresadas:")
    tiempo, _ = medir_tiempo(EvaluacionGeneral, tipos_alergias)
    print(f"Tiempo para crear la Evaluación General: {tiempo} segundos")
    resultado_perfilado = perfilar(EvaluacionGeneral, tipos_alergias)
    evaluacion_general = EvaluacionGeneral(tipos_alergias)
    evaluacion_general.mostrar_resultados()

    # Perfilar y medir el tiempo del cálculo de la puntuación total combinada
    tiempo_combinado, puntuacion_total = medir_tiempo(
        lambda: sum(alergia.valor for alergia in set(alergias_especificas + [a for a in tipos_alergias.obtener_alergias() if a not in alergias_especificas]))
    )
    print(f"Tiempo para calcular la puntuación total combinada: {tiempo_combinado} segundos")
    perfilar(
        lambda: sum(alergia.valor for alergia in set(alergias_especificas + [a for a in tipos_alergias.obtener_alergias() if a not in alergias_especificas]))
    )

    print("\nAlergias Combinadas:")
    alergias_combinadas = set(alergias_especificas + [a for a in tipos_alergias.obtener_alergias() if a not in alergias_especificas])
    for alergia in alergias_combinadas:
        print(alergia)

    print("\nPuntuación Total de Alergias Combinadas:", puntuacion_total)

def main():
    """
    Función principal que controla el flujo del programa.

    Returns:
        None
    """

    tipos_alergias = TiposDeAlergias()
    puntuacion = 0
    alergias_especificas = []
    evaluacion_especifica = EvaluacionEspecifica(0)
    alergias_conocidas = EvaluacionEspecifica.alergias_conocidas
    
    while True:
        print("\nMenú de Evaluación de Alergias")
        print("1. Ingresar puntuación general de alergias")
        print("2. Ingresar tipos de alergias que tiene")
        print("3. Agregar nueva alergia al sistema")
        print("4. Mostrar puntuación general basada en alergias ingresadas")
        print("5. Mostrar ambas evaluaciones")
        print("6. Salir")
        opcion = input("Seleccione una opción: ")

        if opcion == '1':
            puntuacion, alergias_especificas = ingresar_puntuacion_general()
        elif opcion == '2':
             ingresar_tipos_alergias(tipos_alergias, alergias_conocidas)
        elif opcion == '3':
            agregar_alergia()
        elif opcion == '4':
            evaluacion_general = EvaluacionGeneral(tipos_alergias)
            evaluacion_general.mostrar_resultados()
        elif opcion == '5':
            mostrar_evaluaciones_combinadas(puntuacion, alergias_especificas, tipos_alergias)

        elif opcion == '6':
            break
        else:
            print("Opción no válida, intente de nuevo.")

if __name__ == "__main__":
    main()

