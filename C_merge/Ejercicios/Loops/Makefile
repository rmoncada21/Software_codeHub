# target: prerrequisites
#	command to build target
APP=
CODE=$(patsubst %.c,%,$(APP))
COMPILER=gcc
FLAGS=-Wall -Wextra
OUTPUT=-o
BIN_FOLDER=bin
LIBRARIES=

# construir la siguiente regla
# gcc -Wall -Wextra archivo.c -o bin/ejecutable -libraries

all:

code:
	mkdir -p $(BIN_FOLDER)
	$(COMPILER) $(FLAGS) $(APP) $(OUTPUT) $(BIN_FOLDER)/$(CODE) $(LIBRARIES)
run:
	./$(BIN_FOLDER)/$(CODE)
clean:
	rm -rf $(BIN_FOLDER)/*

.PHONY: