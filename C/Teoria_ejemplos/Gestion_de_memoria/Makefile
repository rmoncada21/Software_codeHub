# target: prerrequisites
#   comand to build target

GCC=gcc
DEBUG=-g
FLAGS=-Wall -Wextra
APP=
CODE=$(patsubst %.c,%,$(APP))
OUTPUT=-o
LIBRARIES=
# Directorios
SRC_FOLDER=src
BIN_FOLDER=bin

EXECUTABLES=$(CODE)

all: $(EXECUTABLES)
# se quiere generar el comando de 
# gcc -g -Wall -Wextra nombre_archivo -o nombre_ejecutable -librerias
$(CODE):
	$(GCC) $(DEBUG) $(FLAGS) $(APP) $(OUTPUT) $(BIN_FOLDER)/$(CODE) $(LIBRARIES)

code: $(CODE).c
	mkdir -p bin
	$(GCC) $(DEBUG) $(FLAGS) $(APP) $(OUTPUT) $(BIN_FOLDER)/$(CODE) $(LIBRARIES)

run: $(BIN_FOLDER)
	./$(BIN_FOLDER)/$(CODE)

clean: $(BIN_FOLDER)
	rm -rf $(BIN_FOLDER)/*

.PHONY: all code run clean