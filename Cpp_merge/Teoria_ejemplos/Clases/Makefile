# Target: Prerrequisites
#	comand to build targets
GPP=g++
APP=
# $(patsubst patrón, sustitución, texto)
CODE=$(patsubst %.cpp,%,$(APP))
FLAGS=-Wall -Wextra
DEBUG=-g
OUTPUT=-o
LIBRARIES=
# Folders
BIN_FOLDER=bin
SRC_FOLDER=src

EXECUTABLES=$(CODE)

# g++ -g -Wall -Wextra archivo.cpp -o ejecutable -librerias
all:
	$(GPP) $(DEBUG) $(FLAGS) $(APP) $(OUTPUT) $(BIN_FOLDER)/$(CODE) $(LIBRARIES)

code: $(APP)
	mkdir -p $(BIN_FOLDER)
	$(GPP) $(DEBUG) $(FLAGS) $(APP) $(OUTPUT) $(BIN_FOLDER)/$(CODE) $(LIBRARIES)

run: $(BIN_FOLDER)
	./$(BIN_FOLDER)/$(CODE)

clean: $(BIN_FOLDER)
	rm -rf $(BIN_FOLDER)/*

.PHONY: all code run clean