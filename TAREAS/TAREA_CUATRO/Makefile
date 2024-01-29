# Makefile para ejecutar el programa de alergias desde la carpeta "src"

# Comandos
PYTHON = python3

# Carpeta donde se encuentra el archivo principal
SRC_DIR = src

# Archivo principal
MAIN_FILE = $(SRC_DIR)/alergias.py

# Regla por defecto para ejecutar el programa
run:
	$(PYTHON) $(MAIN_FILE)

# Regla para agregar una nueva alergia
add_allergy:
	$(PYTHON) $(MAIN_FILE) 3

# Regla para mostrar la puntuación general basada en alergias ingresadas
show_general_score:
	$(PYTHON) $(MAIN_FILE) 4

# Regla para mostrar ambas evaluaciones
show_combined_evaluations:
	$(PYTHON) $(MAIN_FILE) 5

# Regla para ejecutar el programa con puntuación general de alergias ingresada
run_with_score:
	$(PYTHON) $(MAIN_FILE) 1

# Regla para ingresar tipos de alergias que tiene
enter_allergy_types:
	$(PYTHON) $(MAIN_FILE) 2

# Regla para agregar una nueva alergia al sistema
add_allergy_to_system:
	$(PYTHON) $(MAIN_FILE) 3

# Regla para salir del programa
exit:
	exit 0
