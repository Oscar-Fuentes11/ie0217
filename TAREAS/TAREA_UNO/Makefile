CC = g++
CFLAGS = -std=c++11
SRC_DIR = src
EXECUTABLE = adivina.exe

ifeq ($(OS),Windows_NT)
	RM = del /Q
else
	UNAME_S := $(shell uname -s)
	ifeq ($(UNAME_S),Linux)
		RM = rm -f
	endif
	ifeq ($(UNAME_S),Darwin)
		RM = rm -f
	endif
endif

all: build run

build: $(EXECUTABLE)

run: $(EXECUTABLE)
	./$(EXECUTABLE) 0 20

$(EXECUTABLE): $(SRC_DIR)/JuegoAdivinanza.o $(SRC_DIR)/main.o
	$(CC) $(CFLAGS) $^ -o $@

$(SRC_DIR)/JuegoAdivinanza.o: $(SRC_DIR)/JuegoAdivinanza.cpp $(SRC_DIR)/JuegoAdivinanza.hpp
	$(CC) $(CFLAGS) -c $< -o $@

$(SRC_DIR)/main.o: $(SRC_DIR)/main.cpp $(SRC_DIR)/JuegoAdivinanza.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(SRC_DIR)/*.o $(EXECUTABLE)
