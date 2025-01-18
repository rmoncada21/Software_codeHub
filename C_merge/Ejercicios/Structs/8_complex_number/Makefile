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
FILES=$(shell find . -maxdepth 1 -type f -name "*.c" -o -name "*.h")
SOURCES=$(wildcard *.c)
EXE_SOURCES=$(SOURCES:.c=)
# Directorios
BIN_FOLDER=bin
SRC_FOLDER=src
TEST_FOLDER=test

# Reglas
all:

# Revisar sintaxis de todos los archivos de la carpeta
syntax:
	@echo "make syntax"
	@echo "Revisando la sintax de los archivos en la ubicación actual $(PWD)"
# $(GCC) $(CFLAGS) $(CSINTAX) *.c
	$(GCC) $(CFLAGS) $(CSINTAX) $(FILES)

# Revisar sintaxis por archivo individual
$(SOURCES:.c=_syntax):
	@echo "make $(SOURCES:.c=_syntax)"
	@echo "Revisando sintaxis del archivo $(@:_syntax=.c)"
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

run:
ifeq ($(strip $(TEST_INPUT)),)
	./$(BIN_FOLDER)/$(CODE)
else
	./$(BIN_FOLDER)/$(CODE) < $(TEST_FOLDER)/$(TEST_INPUT)
endif

clean:

# Mostrar archivos guardados en las variables definidas
mostrar_arvhivos:
	@echo "Archivos CODE"
	@echo "$(CODE)"
	@echo -e "\nArchivos SOURCES"
	@echo "$(SOURCES)"
	@echo -e "\nArchivos FILES"
	@echo "$(FILES)"

# Necesario para crear las reglas únicas del Makefile
.PHONY: all code syntax source $(SOURCES) $(SOURCES:.c=_syntax) run clean