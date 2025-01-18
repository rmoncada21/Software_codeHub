# target: prerequisites
# 	command to build target

# crear el comando de compilación
# gcc -Wall -Wextra archivo.c -o bin/main -librerias
# gcc -Wall -Wextra -fsyntax archivos.c

# Variables
APP?=main.c
CODE=$(APP:.c=)
GCC=gcc
CSINTAX=-fsyntax-only
CFLAGS=-Wall -Wextra
TEST_INPUT=
LIBRARIES=
SOURCES=$(wildcard *.c)
EXE_SOURCES=$(SOURCES:.c=)

# Directorios
BIN_FOLDER=bin
SRC_FOLDER=src
TEST_FOLDER=test

# Reglas
all:

code:

# Revisar sintaxis de todos los archivos de la carpeta
syntax:
	$(GCC) $(CFLAGS) $(CSINTAX) *

# Revisar sintaxis por archivo individual
$(SOURCES:.c=_syntax):
	$(GCC) $(CSINTAX) $(@:_syntax=.c)

# Compilar todos los archivos .c de la carpeta y crear el ejecutable bin/main
# Ademas de crear las carpetas bin, test
source:
	mkdir -p $(BIN_FOLDER)
	mkdir -p $(TEST_FOLDER)
	$(GCC) $(CFLAGS) $(SOURCES) -o $(BIN_FOLDER)/$(CODE) $(LIBRARIES)

# Compilar y crear ejecutable con el mismo nombre del archivo.c
# Ademas de crear las carpetas bin, test
# FUNCIONA solo con archivos.c que incluyan la función int main(){}
$(SOURCES):
	mkdir -p $(BIN_FOLDER)
	mkdir -p $(TEST_FOLDER)
	$(GCC) $(CFLAGS) $@ -o $(BIN_FOLDER)/$(@:.c=) $(LIBRARIES)

# Mostrar archivos guardados en las variables definidas
mostrar_arvhivos:
	@echo "Archivos CODE"
	@echo "$(CODE)"
	@echo -e "\nArchivos SOURCES"
	@echo "$(SOURCES)"

# Necesario para crear las reglas únicas del Makefile
.PHONY: all code syntax source $(SOURCES) $(SOURCES:.c=_syntax)