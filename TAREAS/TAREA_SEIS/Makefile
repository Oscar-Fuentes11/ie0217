ifeq ($(OS),Windows_NT)
    PYTHON=python
else
    UNAME_S := $(shell uname -s)
    ifeq ($(UNAME_S),Linux)
        PYTHON=python3
    endif
endif

all: run

run:
	$(PYTHON) ./src/INFOHERE/main.py

lint:
	pylint ./src/INFOHERE/main.py

.PHONY: all run lint
