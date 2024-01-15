# Makefile

# Detectar el sistema operativo
ifeq ($(OS),Windows_NT)
    EXECUTABLE = programa.exe
    RM = del /Q
else
    UNAME_S := $(shell uname -s)
    ifeq ($(UNAME_S),Linux)
        EXECUTABLE = programa
        RM = rm -f
    endif
    ifeq ($(UNAME_S),Darwin)
        EXECUTABLE = programa
        RM = rm -f
    endif
endif

# Directorios
SRC_DIR = src

# Archivos fuente
SOURCES = $(wildcard $(SRC_DIR)/*.cpp)

# Flags del compilador
CXX = g++
CXXFLAGS = -std=c++11 -Wall

# Regla por defecto
all: clean run

# Regla para compilar el programa
$(EXECUTABLE): $(SOURCES)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Regla para ejecutar el programa
run: $(EXECUTABLE)
	./$(EXECUTABLE)

# Regla para limpiar archivos generados
clean:
	$(RM) $(EXECUTABLE)
