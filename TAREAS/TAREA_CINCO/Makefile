# Makefile

# Variable que detecta el sistema operativo
ifeq ($(OS),Windows_NT)
    detected_OS := Windows
else
    detected_OS := $(shell uname -s)
endif

# Rutas de los programas
PROGRAMA1 := src/Programa1/analisisDatos.py
PROGRAMA2 := src/Programa2/Operaciones_Basicas.py

all: programa1 programa2

programa1:
ifeq ($(detected_OS),Linux)
	@echo "Ejecutando analisisDatos.py en Linux/Unix"
	python3 $(PROGRAMA1)
else ifeq ($(detected_OS),Windows)
	@echo "Ejecutando analisisDatos.py en Windows"
	python $(PROGRAMA1)
else
	@echo "Sistema Operativo no soportado"
endif

programa2:
ifeq ($(detected_OS),Linux)
	@echo "Ejecutando Operaciones_Basicas.py en Linux/Unix"
	python3 $(PROGRAMA2)
else ifeq ($(detected_OS),Windows)
	@echo "Ejecutando Operaciones_Basicas.py en Windows"
	python $(PROGRAMA2)
else
	@echo "Sistema Operativo no soportado"
endif
