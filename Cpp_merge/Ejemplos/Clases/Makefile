# -------------------------------------------------------------------
# Makefile: Archivo para la gestión y compilación de proyectos en C.
# -------------------------------------------------------------------
# target: prerequisites
# command to build target

# Ejemplos de comandos de compilación:
# Verificar sintaxis sin generar archivo ejecutable
#   g++ -Wall -Wextra -fsyntax-only archivo.c
# Compilar un archivo .c generando ejecutable
#   g++ -Wall -Wextra archivo.c -o bin/archivo -librerias
# Compilar varios archivos .c generando ejecutable
#   g++ -Wall -Wextra archivo1.c archivo2.c -o bin/archivo -librerias

# -------------------------------------------------------------------
# Variables
# -------------------------------------------------------------------

# Aplicación principal
APP?=main.cpp
EXE_APP=$(APP:.cpp=)

# Compilador y opciones
GPP=g++
CFLAGS=-Wall -Wextra
CSYNTAX=-fsyntax-only

# Archivos de cabecera
CPPSOURCES=$(wildcard *.cpp)
CPPHEADERS=$(wildcard *.hpp)
CPPFILES=$(CPPSOURCES) $(CPPHEADERS)

# Directorios
BIN_FOLDER=bin
SRC_FOLDER=src
TEST_FOLDER=test
TEST_FILES=$(wildcard $(TEST_FOLDER)/*.txt)
TEST_INPUT=$(notdir $(TEST_FILES))

# Ejecutables
EXE_CPPSOURCES_FILES=$(wildcard $(BIN_FOLDER)/*)
EXE_CPPSOURCES=$(notdir $(EXE_CPPSOURCES_FILES))
# EXE_CPPSOURCES=$(patsubst $(BIN_FOLDER)/%,%, $(EXE_CPPSOURCES_FILES))


# -------------------------------------------------------------------
# Código ansi de colores
# -------------------------------------------------------------------

# Colores básicos:
RESET = \033[0m
NEGRO = \033[30m
ROJO = \033[31m
VERDE = \033[32m
AMARILLO = \033[33m
AZUL = \033[34m
MAGENTA = \033[35m
CIAN = \033[36m
BLANCO = \033[37m

# Colores brillantes (intensos):
NEGRO_BRILLANTE = \033[90m
ROJO_BRILLANTE = \033[91m
VERDE_BRILLANTE = \033[92m
AMARILLO_BRILLANTE = \033[93m
AZUL_BRILLANTE = \033[94m
MAGENTA_BRILLANTE = \033[95m
CIAN_BRILLANTE = \033[96m
BLANCO_BRILLANTE = \033[97m

# Fondo de colores:
NEGRO_FONDO = \033[40m
ROJO_FONDO = \033[41m
VERDE_FONDO = \033[42m
AMARILLO_FONDO = \033[43m
AZUL_FONDO = \033[44m
MAGENTA_FONDO = \033[45m
CIAN_FONDO = \033[46m
BLANCO_FONDO = \033[47m

# Fondos brillantes:
NEGRO_BRILLANTE_FONDO = \033[100m
ROJO_BRILLANTE_FONDO = \033[101m
VERDE_BRILLANTE_FONDO = \033[102m
AMARILLO_BRILLANTE_FONDO = \033[103m
AZUL_BRILLANTE_FONDO = \033[104m
MAGENTA_BRILLANTE_FONDO = \033[105m
CIAN_BRILLANTE_FONDO = \033[106m
BLANCO_BRILLANTE_FONDO = \033[107m


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
	@echo -e "$(AZUL_FONDO)make $@$(RESET)"
	@echo -e "$(GPP) $(CFLAGS) $(CIAN_FONDO)$(CSYNTAX)$(RESET) $(VERDE_BRILLANTE)$(CPPFILES)$(RESET) \n"
	@$(GPP) $(CFLAGS) $(CSYNTAX) $(CPPFILES)


# Regla para comprobar sintaxis de un archivo
$(CPPFILES:=_syntax):
	@echo -e '$(AZUL_FONDO)make $$(CPPFILES:=_syntax)$(RESET)'
	@echo -e "$(AZUL_BRILLANTE)make $@$(RESET)"
	@echo -e "$(GPP) $(CFLAGS) $(CIAN_FONDO)$(CSYNTAX)$(RESET) $(VERDE_BRILLANTE)$(@:_syntax=)$(RESET)\n"
	@$(GPP) $(CFLAGS) $(CSYNTAX) $(@:_syntax=)


# Regla para compilar un main.c con archivos #include <archivo.h>
cppsource:
	@echo -e "$(AZUL_FONDO)make $@$(RESET)"
	@echo -e "$(GPP) $(CFLAGS) $(VERDE_BRILLANTE)$(CPPSOURCES)$(RESET) -o $(BIN_FOLDER)/$(CIAN_BRILLANTE)$(APP:.cpp=)$(RESET)\n"
	@$(GPP) $(CFLAGS) $(CPPSOURCES) -o $(BIN_FOLDER)/$(APP:.cpp=)
	

# Regla para compilar un archivo.c con función int main(){}
$(CPPSOURCES): mkdir
	@echo -e '$(AZUL_FONDO)make $$(CPPSOURCES)$(RESET)'
	@echo -e "$(AZUL_BRILLANTE)make $@$(RESET)"
	@echo -e "$(GPP) $(CFLAGS) $(VERDE_BRILLANTE)$@$(RESET) -o $(BIN_FOLDER)/$(CIAN_BRILLANTE)$(@:.cpp=)$(RESET)\n"
	@$(GPP) $(CFLAGS) $@ -o $(BIN_FOLDER)/$(@:.cpp=)


# Regla para ejecutables con int main(int argv, char* [])
_lectura:
	@echo -e '$(AZUL_FONDO)$$(EXE_CPPSOURCES:=_arg)$(RESET)'
	@echo -n "Ingrese los datos del test: "

$(EXE_CPPSOURCES:=_arg): _lectura
	$(eval MATRIZ := $(shell read -a matriz; echo $${matriz[@]}))
# @echo "La matriz desde Makefile es: $(MATRIZ)"
# Aquí, ejecutamos la acción con la matriz capturada
	@echo -e "\n$(AZUL_BRILLANTE)make $@$(RESET)"
	@echo -e "./$(BIN_FOLDER)/$(CIAN_BRILLANTE)$(@:_arg=) $(MATRIZ)$(RESET)\n"
	@./$(BIN_FOLDER)/$(@:_arg=) $(MATRIZ)


# Regla para ejecutables con archivo de entrada o sin archivo
$(EXE_CPPSOURCES):
	@if [ "$(words $(MAKECMDGOALS))" -eq 1 ]; then \
		echo -e "$(AZUL_BRILLANTE)Ejecutando $(BIN_FOLDER)/$@$(RESET) $(VERDE_BRILLANTE)sin entrada...$(RESET)\n"; \
		./$(BIN_FOLDER)/$@; \
	elif [ "$(words $(MAKECMDGOALS))" -eq 2 ]; then \
		TEST_INPUT=$(word 2, $(MAKECMDGOALS)); \
		echo -e "$(AZUL_BRILLANTE)Ejecutando $(BIN_FOLDER)/$@$(RESET) < $(VERDE_BRILLANTE) $(TEST_FOLDER)/$$TEST_INPUT$(RESET)\n"; \
		./$(BIN_FOLDER)/$@ < $(TEST_FOLDER)/$$TEST_INPUT; \
	else \
		echo -e "$(CIAN_BRILLANTE)Error: demasiados argumentos. Uso: make <ejecutable> [<archivo_entrada>]$(RESET)"; \
	fi


# Regla para limpiar archivos ejecutables
clean:
	@echo -e "$(AZUL_FONDO)make clean$(RESET) -> $(AZUL_BRILLANTE)limpiando ejecutables$(RESET)"
	@echo -e "rm -rf $(BIN_FOLDER)/$(ROJO_BRILLANTE_FONDO)*$(RESET)"
	@echo -e "rm -rf $(BIN_FOLDER)/*


# Regla para mostrar contenidos de la variables
mostrar_archivos:
	@echo "Mostrando valores de variables del Makefile:"
	@echo -e "\nVariable APP:"
	@echo "$(APP)"
	@echo -e "\nVariable EXE_APP:"
	@echo "$(EXE_APP)"
	@echo -e "\nVariable GPP:"
	@echo "$(GPP)"
	@echo -e "\nVariable CFLAGS:"
	@echo "$(CFLAGS)"
	@echo -e "\nVariable CSYNTAX:"
	@echo "$(CSYNTAX)"
	@echo -e "\nArchivos CPPSOURCES:"
	@echo "$(CPPSOURCES)"
	@echo -e "\nArchivos CPPHEADERS:"
	@echo "$(CPPHEADERS)"
	@echo -e "\nArchivos CPPFILES (CPPSOURCES + CPPHEADERS):"
	@echo "$(CPPFILES)"
	@echo -e "\nDirectorio BIN_FOLDER:"
	@echo "$(BIN_FOLDER)"
	@echo -e "\nDirectorio SRC_FOLDER:"
	@echo "$(SRC_FOLDER)"
	@echo -e "\nDirectorio TEST_FOLDER:"
	@echo "$(TEST_FOLDER)"
	@echo -e "\nArchivos TEST_INPUT:"
	@echo "$(TEST_INPUT)"
	@echo -e "\nArchivos ejecutables en BIN_FOLDER (EXE_CPPSOURCES_FILES):"
	@echo "$(EXE_CPPSOURCES_FILES)"
	@echo -e "\nNombres de ejecutables (EXE_CPPSOURCES):"
	@echo "$(EXE_CPPSOURCES)"


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
.PHONY: all test_colores mkdir syntax $(CPPFILES:=_syntax) source \
		$(CPPSOURCES) $(EXE_CPPSOURCES) clean \
		mostrar_archivos lectura help \