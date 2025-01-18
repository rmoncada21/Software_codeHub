# target: prerequisites
# command to build target

# crear comando de compilación
# gcc -Wall -Wextra archivo.c -o bin/archivo -librerias

# crear comando de sintáxis
# gcc -Wall -Wextra -fsyntax-only archivo.c

# Variables makefile
APP?=main.c
CODE=$(APP:.c=)
GCC=gcc
CFLAGS=-Wall -Wextra
SYNTAX=-fsyntax-only
# Esta variable guarda la dirección completa test/*.txt
TEST_FILES=$(wildcard $(TEST_FOLDER)/*.txt)
# Quita la direccio test/ de la variable
TEST_INPUT=$(patsubst $(TEST_FOLDER)/%,%,$(TEST_FILES))
# FILES=$(shell find . -maxdepth 1 -type f -name "*.c" -o -name "*.h")
SOURCES=$(wildcard *.c)
HEADERS=$(wildcard *.h)
FILES= $(SOURCES) $(HEADERS)

# Directorios
BIN_FOLDER=bin
SRC_FOLDER=src
TEST_FOLDER=test

# Reglas
all: mkdir source $(TEST_INPUT)

mkdir:
	@echo "make mkdir"
	mkdir -p $(BIN_FOLDER)
	mkdir -p $(TEST_FOLDER)

source: mkdir
	@echo "make source"
	$(GCC) $(CFLAGS) $(SOURCES) -o $(BIN_FOLDER)/$(CODE)

# Regla para compilar archivo individualmente
# Especialmente para reisar sintaxis
# No generar ejecutable
$(SOURCES):
	@echo -n 'Regla $$(SOURCES)'
	@echo " -> make $@"
	$(GCC) $(CFLAGS) $(SYNTAX) $@

syntax: $(FILES)
	@echo 'make syntax'
	$(GCC) $(CFLAGS) $(SYNTAX) $^

run:
	@echo 'make run'
	./$(BIN_FOLDER)/$(CODE)

$(TEST_INPUT):
	@echo -n 'make $$(TEST_INPUT)'
	@echo " -> make $(TEST_INPUT)"
	./$(BIN_FOLDER)/$(CODE) < $(TEST_FOLDER)/$(TEST_INPUT)

mostrar_archivos:
	@echo "make mostrar_archivos"
	@echo "Archivos APP"
	@echo -e "$(APP)\n"
	@echo "Archivos CODE"
	@echo -e "$(CODE)\n"
	@echo "Archivos FILES"
	@echo -e "$(FILES)\n"
	@echo "Archivos TEST_INPUT"
	@echo -e "$(TEST_INPUT)\n"

clean:
	rm -rf $(BIN_FOLDER)/*

.PHONY: all mkdir source \
		mostrar_archivos \
		$(SOURCES) syntax\
		$(TEST_INPUT)\
		clean run\