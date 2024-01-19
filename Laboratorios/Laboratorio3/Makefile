CC = g++
CFLAGS = -std=c++11
TARGET = agenda

all: $(TARGET)

$(TARGET): main.cpp
	$(CC) $(CFLAGS) -o $(TARGET) main.cpp

# clean para limpiar los archivos generados
clean:
	rm -f $(TARGET)

# "cositas", Evitar conflictos con archivos de mismo nombre
.PHONY: all clean
