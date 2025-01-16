# target: prerrequisites
# command to build taget

# construir comando gcc -Wall -Wextra archivo.c -o bin/archivo -librerias

# Variables
APP?=main.c
CODE=$(patsubst %.c,%,$(APP))
SOURCE=$(wildcard *.c)
TEST_INPUT=
GCC=gcc
CFLAGS=-Wall -Wextra
OUTPUT=-o
LIBRARIES=

# Directorios
BIN_FOLDER=bin
SRC_FOLDER=src
TEST_FOLDER=test

# Reglas
all: code run

create_folder: $(BIN_FOLDER) $(TEST_FOLDER)
	mkdir -p $(BIN_FOLDER)
	mkdir -p $(TEST_FOLDER)

code: create_folder $(APP) 
	$(GCC) $(CFLAGS) $(APP) $(OUTPUT) $(BIN_FOLDER)/$(CODE)

source: create_folder $(SOURCE)
	@echo "Archivos fuente: $(SOURCE)"
	$(GCC) $(CFLAGS) $(SOURCE) $(OUTPUT) $(BIN_FOLDER)/$(CODE)
run:
ifeq ($(strip $(TEST_INPUT)),)
	@echo "Make run -> Ejecutando sin archivo TEST_INPUT de entrada"
	./$(BIN_FOLDER)/$(CODE)
else
	@echo "Make run -> Ejecutando con archivo $(TEST_INPUT) de entrada"
	./$(BIN_FOLDER)/$(CODE) < $(TEST_FOLDER)/$(TEST_INPUT)
endif

clean:
	rm -rf $(BIN_FOLDER)/$(CODE)

.PHONY: all code source run clean

