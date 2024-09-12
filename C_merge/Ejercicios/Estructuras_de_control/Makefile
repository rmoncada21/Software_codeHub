# taget: prerrequisites
#	command to build prerrequisites
APP=
CODE=$(patsubst %.c,%,$(APP))
COMPILER=gcc
FLAGS=-Wall -Wextra
OUTPUT=-o
BIN_FOLDER=bin
LIBRARIES=

# construir el comando de compilación
# gcc -Wall -Wextra -o bin/nombre_ejecutable nombre_archivo.c -librerias

all: code run

# regla de compilación individual
code:
	mkdir -p $(BIN_FOLDER)
	$(COMPILER) $(FLAGS) $(OUTPUT) $(BIN_FOLDER)/$(CODE) $(APP) $(LIBRARIES)

clean:
	rm -rf $(BIN_FOLDER)/*

run:
	./$(BIN_FOLDER)/$(CODE)

.PHONY: all code clean run