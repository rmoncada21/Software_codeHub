# -------------------------------------------------------------------
# Makefile: Archivo para la gestión y compilación de proyectos en C.
# -------------------------------------------------------------------
# target: prerequisites
# command to build target

# Ejemplos de comandos de compilación:
# Verificar sintaxis sin generar archivo ejecutable
#   gcc -Wall -Wextra -fsyntax-only archivo.c
# Compilar un archivo .c generando ejecutable
#   gcc -Wall -Wextra archivo.c -o bin/archivo -librerias
# Compilar varios archivos .c generando ejecutable
#   gcc -Wall -Wextra archivo1.c archivo2.c -o bin/archivo -librerias

# -------------------------------------------------------------------
# Variables
# -------------------------------------------------------------------

# Aplicación principal
APP?=main
EXE_APP=$(APP:.c=)

# Compilador y opciones
GCC=gcc
CFLAGS=-Wall -Wextra
CSYNTAX=-fsyntax-only

# Archivos de cabecera
CSOURCES=$(wildcard *.c)
CHEADERS=$(wildcard *.h)
CFILES=$(CSOURCES) $(CHEADERS)

# Directorios
BIN_FOLDER=bin
SRC_FOLDER=src
TEST_FOLDER=test

# Ejecutables
EXE_CSOURCES_FILES=$(wildcard $(BIN_FOLDER)/*)
EXE_CSOURCES=$(patsubst $(BIN_FOLDER)/%,%,$(EXE_CSOURCES_FILES))


# -------------------------------------------------------------------
# Reglas
# -------------------------------------------------------------------

# Regla principal
all: mkdir csource


# Regla para crear directorios
mkdir:
	mkdir -p $(BIN_FOLDER) $(SRC_FOLDER) $(TEST_FOLDER)


# Regla para comprobar sintaxis de todos los archivos
syntax:
	@echo "make $@"
	$(GCC) $(CFLAGS) $(CSYNTAX) $(CFILES)


# Regla para comprobar sintaxis de un archivo
$(CFILES:=_syntax):
	@echo 'make $$(CFILES:=_syntax)'
	@echo -e "make $@\n"
	$(GCC) $(CFLAGS) $(CSYNTAX) $(@:_syntax=)


# Regla para compilar un main.c con archivos #include <archivo.h>
csource:
	@echo -e "make $@\n"
	$(GCC) $(CFLAGS) $(CSOURCES) -o $(BIN_FOLDER)/$(APP:.c=)


# Regla para compilar un archivo.c con función main
$(CSOURCES):
	@echo 'make $$(CSOURCES)'
	@echo -e "make $@\n"
	$(GCC) $(CFLAGS) $@ -o $(BIN_FOLDER)/$(@:.c=)


# Regla para ejecutables con int main(int argv, char* [])
lectura:
	@echo "Ingrese los datos del test:"

$(EXE_CSOURCES:=_arg): lectura
	$(eval MATRIZ := $(shell read -a matriz; echo $${matriz[@]}))
# @echo "La matriz desde Makefile es: $(MATRIZ)"
# Aquí, ejecutamos la acción con la matriz capturada
	./$(BIN_FOLDER)/$(@:_arg=) $(MATRIZ)

# Regla para ejecutables con archivo de entrada o sin archivo
$(EXE_CSOURCES):
ifeq ($(strip $(TEST_INPUT)),)
	@echo 'make $$(EXE_CSOURCES)'
	@echo -e "make $@\n"
	./$(BIN_FOLDER)/$@
else
	@echo 'make $$(EXE_CSOURCES)'
	@echo -e "make $@ < $(TEST_INPUT)\n"
	./$(BIN_FOLDER)/$@ < $(TEST_INPUT)
endif


# Regla para limpiar archivos ejecutables
clean:
	@echo "make clean -> limpiando ejecutables"
	rm -rf $(BIN_FOLDER)/*


# Regla para mostrar contenidos de la variables
mostrar_archivos:
	@echo "Mostrando valores de variables del Makefile:"
	@echo -e "\nVariable APP:"
	@echo "$(APP)"
	@echo -e "\nVariable EXE_APP:"
	@echo "$(EXE_APP)"
	@echo -e "\nVariable GCC:"
	@echo "$(GCC)"
	@echo -e "\nVariable CFLAGS:"
	@echo "$(CFLAGS)"
	@echo -e "\nVariable CSYNTAX:"
	@echo "$(CSYNTAX)"
	@echo -e "\nArchivos CSOURCES:"
	@echo "$(CSOURCES)"
	@echo -e "\nArchivos CHEADERS:"
	@echo "$(CHEADERS)"
	@echo -e "\nArchivos CFILES (CSOURCES + CHEADERS):"
	@echo "$(CFILES)"
	@echo -e "\nDirectorio BIN_FOLDER:"
	@echo "$(BIN_FOLDER)"
	@echo -e "\nDirectorio SRC_FOLDER:"
	@echo "$(SRC_FOLDER)"
	@echo -e "\nDirectorio TEST_FOLDER:"
	@echo "$(TEST_FOLDER)"
	@echo -e "\nArchivos ejecutables en BIN_FOLDER (EXE_CSOURCES_FILES):"
	@echo "$(EXE_CSOURCES_FILES)"
	@echo -e "\nNombres de ejecutables (EXE_CSOURCES):"
	@echo "$(EXE_CSOURCES)"


help:
	@echo "  Ayuda para comandos Makefile:"
	@echo "  make all              -> Construye el proyecto completo (aun sin implementar en este archivo)."
	@echo "  make mkdir            -> Crea los directorios bin/, src/, y test/."
	@echo "  make syntax           -> Verifica la sintaxis de todos los archivos fuente sin generar ejecutables."
	@echo "  make <archivo>_syntax -> Verifica la sintaxis de un archivo específico (e.g., archivo.c)."
	@echo "  make csource          -> Compila main.c (o el archivo especificado en APP) con dependencias incluidas."
	@echo "  make <archivo>.c      -> Compila un archivo fuente específico, generando un ejecutable."
	@echo "  make <ejecutable>     -> Corre el ejecutable especificado dentro del directorio bin/."
	@echo "                           Si se define TEST_INPUT, lo usa como entrada estándar."
	@echo "  make clean            -> Elimina todos los archivos ejecutables en bin/."
	@echo "  make mostrar_archivos -> Muestra los archivos definidos en las variables del Makefile."
	@echo "  make help             -> Muestra esta ayuda."


# -------------------------------------------------------------------
# Declaraciones .PHONY
# -------------------------------------------------------------------
.PHONY: all mkdir syntax $(CFILES:=_syntax) source\
		$(CSOURCES) $(EXE_CSOURCES) clean\
		mostrar_archivos lectura help\