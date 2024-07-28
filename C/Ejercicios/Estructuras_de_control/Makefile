# target: prerrequisites 
# comando to build target

# construir el siguiente comando de C 
# gcc -Wall -Wextra archivo.c -o ejecutable -librerias

GCC=gcc
FLGAS=-Wall -Wxtra
APP=
CODE=$(patsubst %.c,%,$(APP))
OUTPUT=-o
LIBRARIES=
BIN=bin
SRC=


all: code

code:
	$(GCC) $(FLAGS) $(OUTPUT) $(BIN)/$(CODE) $(CODE).c $(LIBRARIES)

run:
	mkdir -p bin
	./$(BIN)/$(CODE)

clean:
	rm -rf $(BIN)/*

.PHNOY: all code run