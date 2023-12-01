# Taller Doxygen y Makefile

***
## Parte 1: Doxygen
1. #### Propósito de la documentación. Ejemplo: documentación de Qt
Documentar los códigos de las bibliotecas. Revisar la carpeta de combinatorias de programacion procedimental.


2. #### Documentación de Doxygen: cómo documentar y cómo configurarlo



3. #### Generar un archivo de configuration de proyecto (Doxyfile)
ir a la carpeta de codigo fuente 
>sudo dnf install doxygen
doxygen -g   genera un archivo con dumentacion
doxygen -g -s
genera un archivo "Doxyfile"

~~~
output/_directory = doc
tap_size = 4
optimize_output_for_cc = YES
H


Configuracion con el bbuild
Extract_all = yes
Extract_

Configuracion wanring
Quiet = YES


Configuracion archivos de salida

Input = src
Recursivo = Yes
~~~

4. #### Configurar Doxygen. Exportar/generar documentación


5. #### Página principal de la documentación. Referencias a otros archivos y símbolos

6. #### Qué agregar de Doxygen a control de cambios
NO agregar la carpeta doc al git 


***
## Parte 2: Makefile

1. #### Comandos para compilar la biblioteca y el programa en un shell script
>build.sh
chmod +x build.sh // permisos para que se ejecuta


2. #### Sintaxis de un Makefile: reglas, dependencias (prerrequisitos), comandos


3. #### Cómo make corre un makefile



4. #### Regla clean. Reglas .PHONY



5. #### Reglas reusables. Variables automáticas de make



6. #### Variables automáticas en todas las reglas



7. #### Evitar la múltiple creación del mismo directorio con requisitos de orden



8. #### Declarar y usar variables



9. #### Vistazo del Makefile genérico provisto


10. #### Ayuda del Makefile provisto. Linting (make lint)


