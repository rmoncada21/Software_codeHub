# target: prerrequisites
# command to build target

#construir el comando de comilación
# gcc -Wall -Wextra -g archivo.c -o bin/archivo -liberias

# Variables
APP?=main.c
CODE=$(patsubst %.c,%,$(APP))
SOURCE=$(wildcard *.c)
TEST_INPUT=
GCC=gcc
CFLAGS=-Wall -Wextra
OUTPUT=-o
LIBRARIES=
# Direcciones
BIN_FOLDER=bin
SRC_FOLDER=src
TEST_FOLDER=test/

# Reglas
all: code run

code: $(APP)
	mkdir -p $(BIN_FOLDER)
	mkdir -p $(TEST_FOLDER)
	$(GCC) $(CFLAGS) $(APP) $(OUTPUT) $(BIN_FOLDER)/$(CODE) $(LIBRARIES)

source: $(SOURCE)
	@echo "Archivos fuente: $(SOURCE)"
	mkdir -p $(BIN_FOLDER)
	mkdir -p $(TEST_FOLDER)
	$(GCC) $(CFLAGS) $(SOURCE) $(OUTPUT) $(BIN_FOLDER)/$(CODE) $(LIBRARIES)

run:
ifeq ($(strip $(TEST_INPUT)),)
	@echo "Make run -> Ejecutando sin archivo de TEST_INPUT de entrada"
	./$(BIN_FOLDER)/$(CODE)
else
	@echo "Make run -> Ejecutando con archivo de $(TEST_INPUT) de entrada"
	./$(BIN_FOLDER)/$(CODE) < $(TEST_FOLDER)/$(TEST_INPUT)
endif

clean:
	rm -rf $(BIN_FOLDER)/*

.PHONY: all code run clean