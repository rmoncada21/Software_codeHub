# target: prerrequisites
# 	command to buil target

COMPILER=gcc
LINTER=cpplint
LFILTER=-legal/copyright
DEBUG=-g
FLAGS=-Wall -Wextra
APP=
CODE=$(patsubst %.c,%,$(APP))
OUTPUT=-o
LIBRARIES=
#Directorios
BIN_FOLDER=bin
SRC_FOLDER=src

EXECUTABLES=$(CODE)

# se tiene que hacer lo siguiente
# gcc -Wall -Wextra nombre_app.c -o bin/nombre_ejecutable -librerias

all: code lint

code: $(CODE).c
	mkdir -p $(BIN_FOLDER)
	$(COMPILER) $(FLAGS) $(CODE).c $(OUTPUT) $(BIN_FOLDER)/$(CODE)

lint: $(CODE).c
	$(LINTER) --filter=$(LFILTER) $(CODE).c

run:
	./$(BIN_FOLDER)/$(CODE)

clean:
	rm -rf $(BIN_FOLDER)/*

gitignore:

.PHONY: all code run clean git