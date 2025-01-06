# target: prerrequisites
#	comand to build target

GCC=gcc
DEBUG=-g
FLAGS=-Wall -Wextra
APP=
CODE=$(patsubst %.c,%,$(APP))
OUTPUT=-o
LIBRARIES=
# Directorios
BIN_FOLDER=bin
SRC_FOLDER=src

# crear el siguiente comando compilación 
# gcc -g -Wall -Wextra archivo.c -o bin/ejecutable -librerias

all:

code: $(APP)
	mkdir -p bin
	$(GCC) $(DEBUG) $(FLAGS) $(APP) $(OUTPUT) $(BIN_FOLDER)/$(CODE) $(LIBRARIES)
run:
	./$(BIN_FOLDER)/$(CODE)
clean:
	rm -rf $(BIN_FOLDER)/*

.PHONY: all code run clean