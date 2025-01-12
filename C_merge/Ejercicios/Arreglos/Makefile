# target: prerrequisites
#	comand to build target

GCC=gcc
DEBUG=-g
FLAGS=-Wall -Wextra
APP?=main.c # Valor por defecto si no se especifica
CODE=$(patsubst %.c,%,$(APP))
TEST_INPUT?=test.txt
OUTPUT=-o
LIBRARIES=
# Directorios
BIN_FOLDER=bin
SRC_FOLDER=src

# crear el siguiente comando compilación 
# gcc -g -Wall -Wextra archivo.c -o bin/ejecutable -librerias

all: code run

code: $(APP)
	mkdir -p bin
	$(GCC) $(DEBUG) $(FLAGS) $(APP) $(OUTPUT) $(BIN_FOLDER)/$(CODE) $(LIBRARIES)
	
# usando código bash dentro del makefile
# run: $(APP)
# 	if [ -n "$(strip $(TEST_INPUT))" ]; then \
# 		echo "Ejecutando con entrada desde: $(TEST_INPUT)"; \
# 		./$(BIN_FOLDER)/$(CODE) < $(TEST_INPUT); \
# 	else \
# 		echo "Ejecutando sin entrada"; \
# 		./$(BIN_FOLDER)/$(CODE); \
# 	fi

run: $(APP)
ifeq ($(strip $(TEST_INPUT)),)  # Si TEST_INPUT está vacío
	@echo "Ejecutando sin entrada"
	./$(BIN_FOLDER)/$(CODE)
else                           # Si TEST_INPUT no está vacío
	@echo "Ejecutando con entrada desde $(TEST_INPUT)"
	./$(BIN_FOLDER)/$(CODE) < $(TEST_INPUT)
endif

clean:
	rm -rf $(BIN_FOLDER)/*

.PHONY: all code run clean