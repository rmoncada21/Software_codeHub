# target: prerrequisites
# command to build target

# crear comando gcc -Wall -Wextra archivo.c -o bin/archivo -librerias

# Variables
APP?=main.c
CODE=$(patsubst %*.c,%,$(APP))
SOURCE=$(wildcard *.c)
GCC=gcc
CFLAGS=-Wall -Wextra
LIBRARIES=
TEST_INPUT=
OUTPUT=-o

# Directorios
BIN_FOLDER=bin
SRC_FOLDER=src
TEST_FOLDER=test

# Reglas
all: code run

make_folder:
	mkdir -p $(BIN_FOLDER)
	mkdir -p $(TEST_FOLDER)

code: make_folder $(APP)
	@echo "Comando de compilación"
	@echo "make code APP=$(APP)"
	$(GCC) $(CFLAGS) $(APP) $(OUTPUT) $(BIN_FOLDER)/$(CODE) $(LIBRARIES)

source: make_folder $(SOURCE)
	@echo "Comando de compilación"
	@echo "make source"
	@echo "Arhivos fuentes: $(SOURCE)"
	$(GCC) $(CFLAGS) $(SOURCE) $(OUTPUT) $(BIN_FOLDER)/$(CODE) $(LIBRARIES)

run:
ifeq ($(strip $(TEST_INPUT)),)
	@echo "make run -> Ejecutando sin archivo de TEST_INPUT de entrada"
	./$(BIN_FOLDER)/$(CODE)
else
	@echo "make run -> Ejecutando con archivo de $(TEST_INPUT) de entrada"
	./$(BIN_FOLDER)/$(CODE) < $(TEST_FOLDER)/$(TEST_INPUT)
endif

clean:
	@echo "Borrando archivos ejecutables de $(BIN_FOLDER)"
	rm -rf $(BIN_FOLDER)/*

.PHONY: all code source run clean