#target: prerrequisites
# 	comando to build target

CC=gcc
DEBUG=-g
FLAGS= -Wall -Wextra
LIBRARIES=
APP=appname
# utiliza patsubst para eliminar el sufijo .c
CODE=$(patsubst %.c,%,$(APP))
OUTPUT=-o
# EXECUTABLES=$(CODE) $(CODE)_msan
EXECUTABLES=$(CODE)

# Directorios
BIN_FOLDER=bin
SRC_FOLDER=src

all: $(CODE)

# Regla para compilar el archivo fuente ARCHIVO.c
$(CODE): $(CODE).c
	@echo "En all \n"
	$(CC) $(DEBUG) $(FLAGS) $(CODE).c $(OUTPUT) $(BIN_FOLDER)/$(CODE) $(LIBRARIES)

# code: $(CODE) $(CODE).c
# SI se deja $(CODE), es como llamar a la regla de nuevo
code: $(CODE).c
	@echo "En code \n"
	$(CC) $(DEBUG) $(FLAGS) $(CODE).c $(OUTPUT) $(BIN_FOLDER)/$(CODE) $(LIBRARIES)

# run: $(CODE) $(BIN_FOLDER)
run: $(BIN_FOLDER)
	./$(BIN_FOLDER)/$(CODE)

clean: $(BIN_FOLDER)
	rm -rf $(BIN_FOLDER)/*

.PHONY: all code run clean