# Makefile

# Flags del compilador
CXX = g++
CXXFLAGS = -std=c++11 -Wall

# Detección del sistema operativo
OS := $(shell uname -s)

# Regla por defecto
all: clean programa1 programa2

# Regla para programa1
programa1:
	$(CXX) $(CXXFLAGS) -o programa1 src/Programa1/main.cpp 
ifeq ($(OS),Linux)
	./programa1
else ifeq ($(OS),Darwin) # macOS
	open ./programa1
else
	echo "Unsupported OS"
endif

# Regla para programa2
programa2:
	$(CXX) $(CXXFLAGS) -o programa2 src/Programa2/main.cpp src/Programa2/EmailValidator.cpp
ifeq ($(OS),Linux)
	./programa2
else ifeq ($(OS),Darwin) # macOS
	open ./programa2
else
	echo "Unsupported OS"
endif

# Regla para limpiar archivos generados
clean:
ifeq ($(OS),Linux) || ($(OS),Darwin)
	rm -f programa1 programa2 programa
else
	del programa1.exe programa2.exe programa.exe
endif
