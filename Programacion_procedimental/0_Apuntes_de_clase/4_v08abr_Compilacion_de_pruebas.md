# Compilación y pruebas (build automation)
>>Nota: Ver archivo de Herramientas_Makefil_Linter_Memccheck_Doxygen.md

## Probar el algoritmo/código mediante rastreo
## Aridad, precedencia, y asociatividad de los operadores
Se ejecuta primero la aridad: dice cuantos parametros recibe la funcion
Precedencia: jerarquia de ejecución de operadores

## Corregir error de análisis y diseño en el algoritmo

## Corregir el error en código. Variables lo más locales posibles

## Preparar archivos para el ambiente local: código fuente
Corregir problemas de formatos

## Compilar en línea de comandos. Ejecución interactiva
- Ver archivo comandos_compilación.c

## Redirigir la entrada, salida, y error estándar
Hacer carpeta test para poner archivos de textos 

>./archivo_ejecutable < tests/nombre_archivo_input.txt > tests/nombre_archivo_output.txt 2> tests/nombre_archivo_error.txt
>
- el comando **<** redirecciona entrada estandar al archivo 

- el comando **>** redirecciona la salida al archivo 

- el comadno **2>** redirije el error estandar


## Comparar la salida del programa con la esperada usando icdiff
> ./archivo_ejecutable < tests/nombre_archivo_input.txt | diff | programa | programa 2
> 
- compara la salida del programa con la entrada almacenada en el archivo de la carpeta tests 

- el comando **|** lo guarda en memoria y se lo da a otro programa 

> ./archivo_ejecutable < tests/nombre_archivo_input.txt | diff - tests/nombre_archivo_output.txt
>
- se la pasa el archivo de salida al programa 


> icdiff <(./nombre_ejecutable < tests/nombre_archivo_input.txt) tests/nombre_archivo_output.txt
>
- **ic diff** es mas amigable visualmente

- **icdff --no-headears** para no poner encabezados de los archivos

## Campos en la salida con formato (printf)
## Makefile. Sintaxis. Regla para compilar
Basado en el lenaguje perl

guardar el comando de compilación


## Makefile: Reglas para pruebas de software y limpieza
~~~
#target: requesites/dependicies
#comand to build target

ejecutable:nombre_archivo.c


.PHONY: test
test: ejecutable
  ./archivo_ejecutable < tests/nombre_archivo_input.txt | diff - tests/nombre_archivo_output.txt
  
.PHONY: clean  
  rm -rf nombre_archivos
~~~

## Un Makefile genérico para proyectos en C/C++
Ver Makefile generico brindado por el profe

## Makefile genérico: instalar dependencias. Linter de C/C++ (reglas de estilo)
  
