import pandas as pd

from regresion import regresion_lineal_precios, regresion_lineal_kilometros, regresion_no_lineal_precios, regresion_no_lineal_kilometros
from clustering import clustering
from kaggle.api.kaggle_api_extended import KaggleApi

# Funcion para cargar los datos en un DF y su manejo de errores
def cargar_datos(ruta_archivo):
    try:
        # Cargar el archivo CSV en un DataFrame
        df = pd.read_csv(ruta_archivo)
        return df

    # Posibles excepciones
    except FileNotFoundError:
        print(f"Error: No se encontro el archivo en la ruta {ruta_archivo}")
    except pd.errors.EmptyDataError:
        print("Error: El archivo CSV esta vacio o no contiene datos.")
    except pd.errors.ParserError:
        print("Error: Problema al parsear el archivo CSV. Verificar el formato.")
    except Exception as e:
        print(f"Error inesperado: {str(e)}")

# Autenticacion y descarga del archivo .csv utilizando kaggle
api = KaggleApi()
api.authenticate()

dataset_name = "akshaydattatraykhare/car-details-dataset"

api.dataset_download_files(dataset_name, path='./src/INFOHERE', force=False, quiet=True, unzip=True)

# Llamada a la función para cargar datos
datos = cargar_datos("./src/INFOHERE/CAR DETAILS FROM CAR DEKHO.csv")

# Verificar que los datos se hayan cargado bien
if datos is not None:
    # Se imprimen los primerios 15 datos antes de la limpieza
    print("Datos cargados exitosamente:")
    print(datos.head(15))

    # Descripcion de datos
    print(datos.describe())
    
    # Identificar Datos Faltantes
    print("\nDatos Faltantes por Columna:")
    print(datos.isnull().sum())

    # Eliminar Datos Duplicados
    print("\nEliminando datos duplicados")
    datos.drop_duplicates(inplace=True)

    print("\nDataFrame Resultante:")
    print(datos)

    # Modelos de regresion lineal
    print("\nModelos de regresion lineal:")
    print("\n")
    regresion_lineal_precios(datos)
    print("\n")
    regresion_lineal_kilometros(datos)

    # modelos de regresion no lineal
    print("\nModelos de regresion no lineal:")
    print("\n")
    regresion_no_lineal_precios(datos)
    print("\n")
    regresion_no_lineal_kilometros(datos)

    # Analisis de clustering
    clustering(datos)
